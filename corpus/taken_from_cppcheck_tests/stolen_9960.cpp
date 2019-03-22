int f(int *p = 0) {
    if (p == 0) {
        return 0;
    }
    return *p;
}