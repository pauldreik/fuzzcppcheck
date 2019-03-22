class A {
public:
    const int ** foo() { return &x; }
private:
    const int * x;
};