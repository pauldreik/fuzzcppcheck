void f(char *p, int x) {
    free(p);
    if (x && (p = malloc(10)))
        free(p);
}