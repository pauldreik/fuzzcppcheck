class A {
    int c;
public:
    operator const int& () {return c}
};