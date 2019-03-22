int f(int i);
struct A {
    enum E { B, C };
    bool f(E);
};
void foo() {
    A a;
    const bool x = a.f(A::B);
    const bool y = a.f(A::C);
    if(!x && !y) return;
}
