void f() {
    int a = 0;
    struct b c;
    c.a = &a;
    g(&c);
    if (a == 0) {}
}
