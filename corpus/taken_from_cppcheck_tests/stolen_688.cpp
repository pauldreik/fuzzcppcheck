void foo() {
    char *p = malloc(10);
    free(p);
    p = malloc(10);
    p[10] = 0;
}