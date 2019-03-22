void f() {
    int *x;
    int *y = x;
    delete [] y;
}