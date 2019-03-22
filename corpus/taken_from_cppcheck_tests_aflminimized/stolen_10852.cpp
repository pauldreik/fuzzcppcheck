void f() {
    V v;
    g(std::move(v));
    v.clear();
    if (v.empty()) {}
}