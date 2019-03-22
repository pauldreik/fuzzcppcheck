class Foo {
    std::string GetVal() const;
};
const char *f() {
    Foo f;
    return f.GetVal().c_str();
}