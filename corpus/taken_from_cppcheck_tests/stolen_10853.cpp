void f() {
    P p;
    g(std::move(p));
    x = p->x;
    y = p->y;
}