void f() {
    int *x = calloc(1, sizeof *x);
    free(x);
}