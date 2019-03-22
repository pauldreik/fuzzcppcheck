class Base { };
class Derived : private Base { public: ~Derived() { (void)11; } };Base *base = new Derived;
delete base;