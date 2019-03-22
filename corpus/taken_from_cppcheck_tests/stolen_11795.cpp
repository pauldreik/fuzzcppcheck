class A {
public:
    typedef int INT;
    INT get() const;
    void put(INT x) { a = x; }
    INT a;
};
A::INT A::get() const { return a; }
A::INT i = A::a;