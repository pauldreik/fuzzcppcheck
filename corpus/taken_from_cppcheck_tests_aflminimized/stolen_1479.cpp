class A {
private:
    int _a;
public:
    A(int a) : _a(a) {}
    A(float a) : A(int(a)) {}
};