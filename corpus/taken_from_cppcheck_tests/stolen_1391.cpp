class Base { virtual void f(); };
class Derived : Base { virtual void f() final; };