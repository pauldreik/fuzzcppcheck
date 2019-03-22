void Foo1(const std::string& str) {}
void Foo2(char* c, const std::string str) {}
void Bar() {
    std::string str = "bar";
    Foo1(str, foo);
    Foo2(str.c_str());
}