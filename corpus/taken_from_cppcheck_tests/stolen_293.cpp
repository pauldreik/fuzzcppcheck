void f() {
    struct a {
        std::vector<int> v;
        auto g() { return v.end(); }
    };
}
