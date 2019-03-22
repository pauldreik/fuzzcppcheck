struct A {
    const int& x;
    int y;
};
A f() {
    int i = 0;
    return {i, i};
}
