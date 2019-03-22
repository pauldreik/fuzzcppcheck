void f(int x) {
    int *a = malloc(20);
    if (x)
        free(a);
    else
        a = 0;
}