void f() {
    char *p = malloc(10);
    if (UNLIKELY(!p)) { return; }
    free(p);
}