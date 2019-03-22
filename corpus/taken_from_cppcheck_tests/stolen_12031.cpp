void f() {
    int *x = malloc(sizeof(int));
    memset(x, 0, sizeof(x));
    free(x);
}