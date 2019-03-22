class Base { public: ~Base(); };
class Derived : public Base { public: ~Derived() {} };Base *base = new Derived;
delete base;