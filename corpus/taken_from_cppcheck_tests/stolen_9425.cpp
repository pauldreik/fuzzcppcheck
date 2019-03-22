void f() {
    char *p; p = malloc(100);
    if (x) {
        free(p);
        exit();
    }
    free(p);
}