void h(A a);
void f() {    A a;
    g(std::move(a));
    h(a);
    a.reset(b);
    h(a);
    g(std::move(a));
    h(a);
    a.reset(b);
    h(a);
}