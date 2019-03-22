void f() {
    int *x = malloc(sizeof(int));
    free(x);
    int **y = malloc(sizeof(int*));
    free(y);
}