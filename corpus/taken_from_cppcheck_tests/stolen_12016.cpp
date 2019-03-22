void f() {
    int *x = malloc(sizeof *x);
    free(x);
}