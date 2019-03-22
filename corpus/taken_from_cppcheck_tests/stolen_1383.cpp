class A {
public:
    A() : x(0) { }
    A(const A & a) { x = a.x; }
    A & operator = (const A & a) {
        x = a.x;
        return *this;
    }
private:
    int x;
};
class B : public A {
public:
    B() { }
    B(const B & b) :A(b) { }
private:
    static int i;
};