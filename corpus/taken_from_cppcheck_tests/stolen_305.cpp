struct A {
    const int& x;
    int y;
};
A f(int& x) {
    int i = 0;
    return A{x, i};
}
