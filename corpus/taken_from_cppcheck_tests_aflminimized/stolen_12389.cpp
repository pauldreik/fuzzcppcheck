void Foo1(const std::string& str) {}
void Foo2(char* c, const std::string str) {}
void Foo3(std::string& rstr) {}
void Foo4(std::string str, const std::string& str) {}
void Bar() {
    std::string str = "bar";
    std::stringstream ss("foo");
    Foo1(str);
    Foo1(str.c_str());
    Foo2(str.c_str(), str);
    Foo2(str.c_str(), str.c_str());
    Foo3(str.c_str());
    Foo4(str, str);
    Foo4(str.c_str(), str);
    Foo4(str, str.c_str());
    Foo4(ss.str(), ss.str().c_str());
    Foo4(str.c_str(), str.c_str());
}