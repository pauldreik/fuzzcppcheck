class A {
    int a;
public:
    A() : a(0) { }
    virtual int func() { return a; }
};
class B : public A {
    int b;
public:
    B() : b(0) { }
    int func() { return b; }
};
class C : public B {
    int c;
public:
    C() : c(0) { }
    int func() { return c; }
};