void f(int *p = 0) {
    if (p == 0) {
        init(&p);
    }
    *p = 0;
}