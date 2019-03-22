const char * f() {
    static const char *x;
    static char ret[10];
    if (a) x = &ret[0];
    return x;
}