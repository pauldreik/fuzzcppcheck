class A {
    virtual int f();
    A() {f();}
};
int A::f() { return 1; }
