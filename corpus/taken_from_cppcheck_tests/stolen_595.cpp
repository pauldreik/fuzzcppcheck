void f() {
    int a[5];
    for (int i = 0; i < 10; ++i) {
        for (int j = i; j < 5; ++j) {
            a[i] = 0;
        }
    }
}