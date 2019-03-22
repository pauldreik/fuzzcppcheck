struct A {
    float f[4];
};
void f(const A& b) {
    A a;
    memcpy(&a, &b, sizeof(A));
}