template<int N>
std::vector<int>& f();
void foo() {
    if(f<1>().begin() == f<1>().end()) {}
}
