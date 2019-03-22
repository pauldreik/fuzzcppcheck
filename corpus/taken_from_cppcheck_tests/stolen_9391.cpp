void foo() {
    char *p;
    if (x) { p = malloc(10); }
    if (!x) { p = NULL; }
    free(p);
}