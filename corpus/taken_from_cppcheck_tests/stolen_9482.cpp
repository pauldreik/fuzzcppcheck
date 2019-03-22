void f() {
    char *p = malloc(10);
    if (!p && x) { p = malloc(10); }
    free(p);
}