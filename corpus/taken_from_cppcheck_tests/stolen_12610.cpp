class A {
public:
    struct B {};
    void f();
};

void f()
{
    struct A::B b;
    b.x = 1;
}