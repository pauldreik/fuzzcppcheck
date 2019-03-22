void f() {
    char *p;
    if (p == 0 && (p = malloc(10)) != 0) {
        *p = 0;
    }
}