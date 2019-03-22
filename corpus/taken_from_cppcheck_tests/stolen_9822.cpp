void f(int x) {
    struct xy *p = 0;
    if (x) p = q;
    if (y ? p->x : p->y) { }
}