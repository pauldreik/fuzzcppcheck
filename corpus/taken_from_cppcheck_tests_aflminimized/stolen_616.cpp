void f() {
    int a[10];
    for (int i = 0; i != 10; ++i) {
        some_condition ? 0 : a[i-1];
    }
}