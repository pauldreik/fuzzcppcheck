class Base { public: ~Base(); };
class Derived : public Base { public: ~Derived(); }; Derived::~Derived() {}Base *base = new Derived;
delete base;