template<class F>
void g(F);
auto f() {
    int x;
    return g([&]() { return x; });
}
