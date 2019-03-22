class A {
    int a;
};
class B : A {
    void f();
};
void B::f() {
    a = 0;
}