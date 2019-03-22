static int x;int f() {
    int y;
    if (x) g();
    if (x) y = 123;
    else y = 456;
    return y;
}