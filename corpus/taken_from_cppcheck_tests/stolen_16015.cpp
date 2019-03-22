class A {
    int a;
};
class B : public A {
    void f();
};
void B::f() {
    a = 0;
}