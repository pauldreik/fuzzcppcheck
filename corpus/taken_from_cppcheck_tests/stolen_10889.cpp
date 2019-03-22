int& g();
bool f() {
    int& x = g();
    int& y = g();
    int* xp = &x;
    int* yp = &y;
    return xp > yp;
}
