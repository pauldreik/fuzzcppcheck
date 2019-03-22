struct A {
    const int& x;
    int y;
};
A f(int& x) {
    return A{x, x};
}
