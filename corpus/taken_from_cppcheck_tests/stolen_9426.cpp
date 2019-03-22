void f() {
    char *p; p = malloc(100);
    if (x) {
        free(p);
        x = 0;
    }
    free(p);
}