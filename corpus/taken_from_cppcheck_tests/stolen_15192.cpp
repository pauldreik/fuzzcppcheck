void f() {
    char *p = malloc(100);
    foo(p);
    free(p);
    p = NULL;
}