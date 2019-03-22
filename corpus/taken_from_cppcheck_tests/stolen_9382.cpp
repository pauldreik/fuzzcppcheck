void f() {
    char *p = malloc(10);
    p = NULL;
    free(p);
}