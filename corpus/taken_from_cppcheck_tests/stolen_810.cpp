class Base {
public:
    ~Base(){}
    virtual void foo(){}
};
class Derived : public Base {
public:
    ~Derived() { bar(); }
};
void foo() {
    Base * base = new Derived();
    delete base;
}
