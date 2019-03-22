const std::string& getA(){static std::string a;return a;}
void foo() {
    const std::string a = getA();
}