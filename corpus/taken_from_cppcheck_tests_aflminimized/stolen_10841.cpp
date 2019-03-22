A g(A a);
void f() {
    A a;
    a = g(std::move(a));
    a = g(std::move(a));
}