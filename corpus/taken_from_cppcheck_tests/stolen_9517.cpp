void f(char *p, int x) {
    if (x==12) {
        free(p);
        throw 1;
    }
    free(p);
}