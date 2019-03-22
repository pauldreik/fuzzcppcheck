A g(A a);
void f() {
    A a;
    B b = g(std::move(a));
    C c = g(std::move(a));
}