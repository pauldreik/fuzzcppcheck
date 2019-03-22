struct A {int data;};
bool f(A ix, A iy) {
    A* x = &ix;
    A* y = &iy;
    int* xp = &x->data;
    int* yp = &y->data;
    return xp > yp;
}
