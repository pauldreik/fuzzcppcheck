void f(int x) {
    int *p = 0;
    if (x) p = q;
    else return;
    *p = 0;
}