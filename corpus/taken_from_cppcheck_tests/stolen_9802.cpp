void f() {
    int *p = NULL;
    if (x)
        p = q;
    if (p && *p) { }
}