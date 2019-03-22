struct Foo {
    void func(std::string str) const {}
    static void sfunc(std::string str) {}
};
void func(std::string str) {}
void Bar() {
    std::string str = "bar";
    Foo foo;
    func(str.c_str());
    Foo::sfunc(str.c_str());
    foo.func(str.c_str());
}