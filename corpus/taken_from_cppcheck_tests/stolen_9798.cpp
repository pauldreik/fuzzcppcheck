void f() {
    int *p = 0;
    for (int i = 0; i < 10; ++i) {
        int x = *p + 1;
    }
}