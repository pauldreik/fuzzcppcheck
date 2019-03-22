void f() {
    int a[10];
    for (int i = 0; i != 10; ++i) {
        i == 0 ? 0 : a[i-1];
    }
}