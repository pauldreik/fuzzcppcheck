class Base { };
class Derived : Base { public: ~Derived() { (void)11; } };Base *base = new Derived;
delete base;