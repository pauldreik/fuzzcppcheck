int f(int a) {
    int x = 0, y;
    if (a) x = 1;
    else return 0;
    if (x) y = 123;
    else {}
    return y;
}