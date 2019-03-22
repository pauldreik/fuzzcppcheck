void f() {
    char *p;
    if (p == 0 && (p = malloc(10)) != a && (*p = a)) {
        *p = 0;
    }
}