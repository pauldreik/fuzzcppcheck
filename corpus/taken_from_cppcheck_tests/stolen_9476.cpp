void f() {
    char *p = malloc(10);
    if (!p) { return; }
    free(p);
}