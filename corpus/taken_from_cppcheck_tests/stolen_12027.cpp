void f() {
    int *x = malloc(sizeof(int));
    memset(x, 0, sizeof(int));
    free(x);
}