void f(char *p) {
    char a[4];
    p = a;
    strcpy(p, "x");
}