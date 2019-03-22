void f() {
    int a[2];
    for (int i = 0; i < 2; ++i) {
        if (i == 0) {
            continue;
        }
        a[i - 1] = 0;
    }
}