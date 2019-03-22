class Base {
public:
    int a;
};
class Derived1 : public Base { };
class Derived2 : public Derived1 {
public:
    int get() {
        return a;
    }
};