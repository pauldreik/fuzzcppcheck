void f(int *p) {
    assert(!p || (*p<=6));
    if (p) { *p = 0; }
}