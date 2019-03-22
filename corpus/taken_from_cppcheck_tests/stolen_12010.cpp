void f() {
    int *x = static_cast<int*>(malloc(sizeof(x)));
    free(x);
}