class A {
public:
    int foo() { return x ? x = 0 : x; }
private:
    int x;
};