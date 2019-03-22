struct base { void foo() { } };
struct derived : public base { void foo() { } };
void foo() {
    derived d;
    d.foo();
}