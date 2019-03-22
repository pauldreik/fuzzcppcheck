void f() {
    int x = 0;
    const int *p; p = &x;
    if (p) { return 0; }
}