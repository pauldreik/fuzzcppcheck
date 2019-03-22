class B {
    void bar(int i);
};
class A {
    void bar(int i) const;
};
void foo() {
    B b;
    A a;
    if (b.bar(1) && b.bar(1)) {}
    if (a.bar(1) && a.bar(1)) {}
}