void f() {
    A a;
    A b = std::move(a);
    g(a);
    A c = a;
}