class Base {
public:
    int a;
};
class Derived : public Base {
public:
    int get() const {
        return a;
    }
};