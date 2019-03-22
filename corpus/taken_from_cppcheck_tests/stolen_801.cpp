class Base { public: ~Base(); };
class Derived : public Base { public: ~Derived() { (void)11; } };