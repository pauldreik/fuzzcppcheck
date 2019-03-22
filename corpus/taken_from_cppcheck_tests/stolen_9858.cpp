void f(char *p) {
    int x = 1;
    if (!p) x = 0;
    if (x) *p = 0;
}