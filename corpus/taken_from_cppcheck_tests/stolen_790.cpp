class Base { };
class Derived : public Base { public: ~Derived() { (void)11; } };Base *base = new Derived;
delete base;