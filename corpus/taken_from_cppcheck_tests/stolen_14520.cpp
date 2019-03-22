int f(int a) {
    int x = 1, y;
    if (a) x = 0;
    else return 0;
    if (x) {}
    else y = 123;
    return y;
}