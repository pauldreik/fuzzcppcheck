void f() {
    char *a = malloc(10);
    a += 10;
    free(a - 10);
}