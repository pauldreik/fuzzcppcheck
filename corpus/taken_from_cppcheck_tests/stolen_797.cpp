class Base { public: ~Base(); };
class Derived : public Base { };Base *base = new Derived;
delete base;