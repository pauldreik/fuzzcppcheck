class A {
public:
    int * * foo() { return &x; }
private:
    const int * x;
};