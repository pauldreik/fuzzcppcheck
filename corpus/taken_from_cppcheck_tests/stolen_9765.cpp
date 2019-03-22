void f(int *p) {
    *p = 12;
    assert(p && (*p<=6));
    if (p) { *p = 0; }
}