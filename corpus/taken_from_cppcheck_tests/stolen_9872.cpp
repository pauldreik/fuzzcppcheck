void f(struct X *p, int x) {
    if (!p && x==1 || p && p->x==0) {
        return;
    }
}