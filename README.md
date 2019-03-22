# Fuzz Cppcheck
For fuzzing cppcheck. Note that there is already a fuzzer for cppcheck at https://github.com/orbitcowboy/afl_cppcheck
The benefits of this one is that has a cmake based build system, and does
not try to be clever. As a consequence it puts very hard pressure on the tokenizer.

As of 20190322, it does not take more than a few minutes before it finds crashes.

# Getting started (on Debian or Ubuntu)
It is most likely the easiest to make sure you can compile cppcheck without problems first. Easiest is to issue
```shell
apt build-dep cppcheck
```
as root first. Then make sure you have afl and clang (for libFuzzer):
```shell
apt install afl clang cmake
```
Before you proceed to building the fuzzers:
```shell
git clone https://github.com/pauldreik/fuzzcppcheck.git --recurse-submodules
mkdir build-afl
cd build-afl
CXX=afl-g++ cmake -Duselibfuzzer=off ..
make -j8
afl-fuzz -i ../corpus/taken_from_cppcheck_tests_aflminimized/ -o out -- ./afl_target @@
```
Most likely afl-fuzz will complain about setting the CPU governor etc, just follow the error messages.

To use libFuzzer:
```shell
mkdir build-libfuzzer
cd build-libfuzzer
CXX=clang++ cmake -Duselibfuzzer=on ..
make -j8
mkdir out
./libfuzzer_target -only_ascii=1 out ../corpus/taken_from_cppcheck_tests_aflminimized/
```
# Corpus
There is an initial corpus created by hooking into the [tokenize.cpp](https://github.com/danmar/cppcheck/blob/8efa106d2abf64388545746acec11e1443e4aaee/lib/tokenize.cpp#L1807) file and spit out the input inserting this snippet:
```cpp
 const bool steal_testdata = true;
  if (steal_testdata) {
    static int counter = 0;
    std::ostringstream oss;
    oss << "stolen_" << counter++ << ".cpp";
    std::ofstream steal(oss.str().c_str()/*, std::ios_base::app*/);
    char buf[4096];
    while (code) {
      code.read(buf, sizeof(buf));
      steal.write(buf, code.gcount());
    }
    code.clear();
    code.seekg(0);
  }
```
and then running the cppcheck tests.

# Dictionary
There is yet no dictionary, but it would be great with one, perhaps by using the keywords on [cppreference](https://en.cppreference.com/w/cpp/keyword).
