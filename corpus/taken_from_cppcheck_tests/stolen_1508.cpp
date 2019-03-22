struct S {
    int* a[2];
    S() {
        int* pa = a[1];
        *pa = 0;
    }
};