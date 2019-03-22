class A {
    std::array<int, 10> ints;
};
void f() {
    A a;
    memset(&a, 0, sizeof(A));
}