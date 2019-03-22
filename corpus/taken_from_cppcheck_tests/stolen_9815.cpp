void f() {
    char *p = 0;
    if (x) p = "abcd";
    return p ? f(*p) : f(0);
}