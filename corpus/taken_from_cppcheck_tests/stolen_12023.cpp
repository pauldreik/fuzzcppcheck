void f() {
    int *x = calloc(1, sizeof(int));
    free(x);
}