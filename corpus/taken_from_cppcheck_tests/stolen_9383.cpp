void f() {
    char *p = malloc(10);
    char *q = p;
    free(q);
}