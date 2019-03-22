void f() {
    int x = malloc(20);
    if (x < 0)
        return;
    free(x);
}