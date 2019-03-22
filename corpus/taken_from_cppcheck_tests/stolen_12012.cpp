void f() {
    int *x = malloc(sizeof(int*));
    free(x);
}