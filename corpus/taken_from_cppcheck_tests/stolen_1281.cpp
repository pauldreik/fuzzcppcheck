class A {
public:
    virtual int func();
};
class B : public A {
    int b;
public:
    B() : b(0) { }
    int func() { return b; }
};