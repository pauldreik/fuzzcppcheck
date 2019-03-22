void f() {
    char a[10];
    for (int i = 0; i < 10; ++i)
        f2(&a[i + 1]);
}