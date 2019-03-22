void f() {
    char *p; p = malloc(10);
    if (p == NULL && (*p = a)) {
        return;
    }
}