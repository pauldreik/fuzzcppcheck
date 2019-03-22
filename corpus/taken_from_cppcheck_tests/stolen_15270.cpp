const char * f() {
    static const char *x;
    if (a) x = "123";
    return x;
}