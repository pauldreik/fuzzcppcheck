struct S {
    int a;
    S() {
        int* pa = &a;
        *pa = 4;
    }
};