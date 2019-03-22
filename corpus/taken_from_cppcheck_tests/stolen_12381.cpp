class Foo {
    const char *f();
};
const char *Foo::f() {
    std::string s;
    return s.c_str();
}