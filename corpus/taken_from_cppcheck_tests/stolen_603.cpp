struct TEST { char a[10]; };
void foo() {
    TEST test;
    test.a[-1] = 3;
}