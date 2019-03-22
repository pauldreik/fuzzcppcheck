class A {
    int a;
};
class B : public A {
    void f() {
        a = 0;
    }
};