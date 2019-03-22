class Foo {
    std::string GetVal() const;
};
std::string f() {
    Foo f;
    return f.GetVal().c_str();
}