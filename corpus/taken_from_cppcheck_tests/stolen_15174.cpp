void foo() {
    int i = -1;
    int a[] = {1,2,3};
    FOREACH_X (int x, a) {
        if (i==x) return x;
        i = x;
    }
}