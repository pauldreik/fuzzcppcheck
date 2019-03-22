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
    int getA() const {
        return a;
    }
    int getB() const {
        return b;
    }
};