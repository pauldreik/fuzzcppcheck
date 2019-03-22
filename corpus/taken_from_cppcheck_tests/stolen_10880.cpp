bool f() {
    int x = 0;
    int y = 0;
    int* xp = &x;
    int* yp = &y;
    return xp > yp;
}
