To get a good corpus, I injected the following
into tokenize.cpp, row 1807:


bool Tokenizer::tokenize(std::istream &code,
                         const char FileName[],
                         const std::string &configuration)
{
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

    if (!createTokens(code, FileName))
        return false;

    return simplifyTokens1(configuration);
}
//---------------------------------------------------------------------------


Then I ran the unit tests in cppcheck and harvested the results.

This was made on cppcheck commit 8efa106d2abf64388545746acec11e1443e4aaee
from https://github.com/danmar/cppcheck on 20190322.

I ran afl-cmin on it, and manually removed the largest cases.
