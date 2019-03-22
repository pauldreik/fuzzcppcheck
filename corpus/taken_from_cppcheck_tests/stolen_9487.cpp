void f() {
    void *x = malloc(1U);
    if (!(x != NULL))
        return;
    free(x);
}