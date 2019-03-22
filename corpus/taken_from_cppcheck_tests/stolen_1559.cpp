class A {
    int i;
public:
    A() { foo(); }
    void foo() const { };
    void foo() { i = 0; }
};
class B {
    int i;
public:
    B() { foo(); }
    void foo() { i = 0; }
    void foo() const { }
};
class C {
    int i;
public:
    C() { foo(); }
    void foo() const { i = 0; }
    void foo() { }
};
class D {
    int i;
public:
    D() { foo(); }
	void foo() { }
	void foo() const { i = 0; }
};