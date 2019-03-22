void f() {
    int x = 0;
    x = x & 0x1;
    if (x == 0) { x = 2; }
    y = 42 / x;
}