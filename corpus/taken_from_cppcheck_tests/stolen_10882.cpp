struct A {int data;};
bool f() {
    A x;
    A y;
    int* xp = &x.data;
    int* yp = &y.data;
    return xp > yp;
}
