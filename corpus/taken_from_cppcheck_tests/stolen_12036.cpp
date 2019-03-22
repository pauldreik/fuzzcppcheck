void f() {
    int *x = malloc(sizeof(int) * 10);
    memset(x, 0, sizeof(int) * 10);
    free(x);
}