void f() {
    char *p = malloc(10);
    char *q = p + 1;
    free(q - 1);
}