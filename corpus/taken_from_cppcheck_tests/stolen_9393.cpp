void f() {
    char *p = malloc(10);
    free(p);
    bar(&p);
    free(p);
}