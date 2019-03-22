void f(int i, int j, bool a) {
    if (a) {
        if (i != j) return;
    }
    bool x = (i != j);
    bool b = x;
}
