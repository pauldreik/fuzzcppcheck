A g(A a);
void f() {
    A a;
    a.reset(g(std::move(a)));
    a.reset(g(std::move(a)));
}