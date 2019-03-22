class A {
public:
    int foo() { return x ? x : x = 0; }
private:
    int x;
};