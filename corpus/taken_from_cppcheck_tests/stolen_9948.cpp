void f(int *p = 0) {
    if (!p)
        return;
    *p = 0;
}