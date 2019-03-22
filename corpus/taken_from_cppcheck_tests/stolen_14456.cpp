int f() {
    int a;
    int *p[] = { &a };
    *p[0] = 0;
    return a;
}