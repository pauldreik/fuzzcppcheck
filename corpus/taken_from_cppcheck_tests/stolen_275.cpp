template<class F>
void g(F);
auto f() {
    std::vector<char> v;
    return g([&]() { return v.data(); });
}
