class X {
    std::string s;
    void func() const;
};
Y f(X x) {
    x.func();
}