class base { virtual void f(); };
class derived : base { void f(); };
void derived::f() {}