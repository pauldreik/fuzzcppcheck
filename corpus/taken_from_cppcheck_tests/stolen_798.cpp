class Base { public: ~Base(); };
class Derived : private Fred, public Base { };Base *base = new Derived;
delete base;