void foo() {
    int n;
    int *argv32 = p;
    if (x) {
        n = 0;
        argv32 = 0;
    }

    for (int i = 0; i < n; i++) {
        argv32[i] = 0;
    }
}