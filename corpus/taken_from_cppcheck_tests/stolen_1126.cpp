class Base {
public:
    int a;
};
class Derived : public Base {
public:
    int get() {
        return a;
    }
};