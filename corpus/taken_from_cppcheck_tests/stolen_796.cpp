class Base { public: ~Base(); };
class Derived : private Fred, public Base { public: ~Derived() { (void)11; } };Base *base = new Derived;
delete base;