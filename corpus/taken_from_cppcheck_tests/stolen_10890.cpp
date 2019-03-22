struct A {int data;};
bool f(A ix) {
    A* x = &ix;
    A* y = x;
    int* xp = &x->data;
    int* yp = &y->data;
    return xp > yp;
}
