struct A {
    float f;
};
void f() {
    A a;
    memset(&a, 0, sizeof(A));
}