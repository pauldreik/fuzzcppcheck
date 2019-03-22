void foo() {
    entry a[2], *b[2];
    a[0].value = 123;
    b[0] = &a[0];
    int d = b[0].value;
    return d;
}