void f(int *p, int x) {
    if (x != 0) {
        free(p);
    }
    if (x != 0) {
        return;
    }
    *p = 0;
}