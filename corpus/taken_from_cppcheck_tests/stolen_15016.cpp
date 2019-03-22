void foo() {
    int a[2], *b[2];
    a[0] = 123;
    b[0] = &a[0];
    int *d = b[0];
    return *d;
}