void f() {
    struct foo *p;
    if (p == 0 || p->x == 10) {
        return;
    }
}