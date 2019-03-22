class A {
    int c;
public:
    operator int& () {return c}
};