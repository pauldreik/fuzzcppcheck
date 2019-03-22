class Base { virtual void f(); };
class Derived : Base { void f() volatile; }