void f() {
    for (int x = 0; x < 5; ++x) {        int *p = 0;
        if (a(x)) p=b(x);
        else continue;
        *p = 0;
    }
}