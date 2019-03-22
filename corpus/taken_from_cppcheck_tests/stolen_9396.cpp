void f(char *p) {
    free(p);
    *p = 0;
}