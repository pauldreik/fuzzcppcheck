static char * f() {
x:
    char *p = malloc(100);
    if (err) {
        free(p);
        goto x;
    }
    return p;
}