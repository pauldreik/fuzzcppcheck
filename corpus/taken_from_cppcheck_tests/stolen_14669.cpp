int f(int *p) {
    if (*p == 1) {}
    p = malloc(256);
    return *p;
}