void Foo(const char* p) {}
void Foo(const std::string& str) {Foo(str.c_str());}
void Bar() {
    std::string str = "bar";
    Foo(str);
    Foo(str.c_str());
}