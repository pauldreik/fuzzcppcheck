void f() {
    char *p = malloc(10);
    if (p) { } else { return; }
    free(p);
}