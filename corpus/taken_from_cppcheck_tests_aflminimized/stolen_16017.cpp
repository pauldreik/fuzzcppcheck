class A {
    int a;
};
class B : protected B, public A {
    void f();
};
void B::f() {
    a = 0;
}