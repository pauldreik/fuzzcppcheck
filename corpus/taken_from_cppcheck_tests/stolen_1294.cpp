struct foo {
    int x;
    int y[5][724];
    T a() {
        return y[x++][6];
    }
    T b() {
        return y[1][++x];
    }
    T c() {
        return y[1][6];
    }
};