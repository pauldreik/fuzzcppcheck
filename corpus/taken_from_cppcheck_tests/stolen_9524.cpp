void f() {
    static char *p;
    if (!p) p = malloc(10);
    if (x) { free(p); p = 0; }
};