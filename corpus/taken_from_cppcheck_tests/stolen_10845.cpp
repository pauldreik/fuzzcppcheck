A g(A a);
void f() {
    A a;
    A b;
    A c;
    b.reset(g(std::move(a)));
    c.reset(g(std::move(a)));
}