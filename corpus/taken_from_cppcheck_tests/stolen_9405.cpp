void f(char *p) {
    free(p);
    x = p = foo();
}