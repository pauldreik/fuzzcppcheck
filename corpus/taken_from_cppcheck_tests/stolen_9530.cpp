void f() {
    char *p;
    try {
        p = malloc(10);
        throw 123;
    } catch (...) { }
    free(p);
}