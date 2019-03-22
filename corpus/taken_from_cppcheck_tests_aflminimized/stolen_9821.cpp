void f(int x) {
    struct xy *p = 0;
    if (x) p = q;
    if (p ? p->x || p->y : 0) { }
}