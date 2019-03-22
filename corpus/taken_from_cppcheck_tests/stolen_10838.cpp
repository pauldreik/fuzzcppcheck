void g(A a);
void f() {
    A a;
    g(std::move(a));
    g(std::move(a));
}