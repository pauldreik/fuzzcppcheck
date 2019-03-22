int foo() {
    int *p = 0;
    if (x) { return 0; }
    return p && *p;
}