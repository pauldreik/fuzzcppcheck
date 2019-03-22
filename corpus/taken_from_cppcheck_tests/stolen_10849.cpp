void g(A const & a);
void f() {
    A a;
    A b = std::move(a);
    g(a);
    A c = a;
}