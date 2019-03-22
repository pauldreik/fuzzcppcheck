class Base1 {
public:
    int a;
};
class Base2 {
public:
    int b;
};
class Derived : public Base1, public Base2 {
public:
    int getA() {
        return a;
    }
    int getB() {
        return b;
    }
};