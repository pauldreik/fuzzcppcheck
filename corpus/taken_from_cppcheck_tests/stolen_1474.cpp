class A {
    int number;
public:
    A(int n) { number = n; }
    A() : A{42} {}
};