class Base { };
class Derived : protected Base { public: ~Derived() { (void)11; } };Base *base = new Derived;
delete base;