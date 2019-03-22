void f(int x) {
    char *p;
    if (x) { p = malloc(10); }
    if (x) { free(p); }
}