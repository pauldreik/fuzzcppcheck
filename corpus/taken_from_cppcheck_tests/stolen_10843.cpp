void h(A a);
void f() {    A a;
    g(std::move(a));
    h(a);
    a = b;
    h(a);
    g(std::move(a));
    h(a);
    a = b;
    h(a);
}