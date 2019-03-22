class Base { virtual int f() const = 0; };
class Derived : Base { virtual int f() const final { return 6; } };