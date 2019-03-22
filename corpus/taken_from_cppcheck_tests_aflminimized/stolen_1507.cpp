struct S {
    int a[2];
    S() {
        int* pa = a;
        for (int i = 0; i < 2; i++)
            *pa++ = i;
    }
};