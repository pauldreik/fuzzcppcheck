void f() {
    int a[10];
    for (int i = 0; i < 20; ++i) {
        if (i<10) {
        } else {
            a[i-10] = 0;
        }
    }
}