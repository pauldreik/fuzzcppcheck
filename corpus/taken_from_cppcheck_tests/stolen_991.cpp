struct A {
    float f[4];
};
void f() {
    A a;
    memset(&a, 0, sizeof(A));
}