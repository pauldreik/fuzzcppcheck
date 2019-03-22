void f() {
    char *p;
    if (p == 0 && (*p = 0)) {
        return;
    }
}