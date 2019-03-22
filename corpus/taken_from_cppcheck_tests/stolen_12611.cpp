class A {
public:
    class B {
    public:
        struct C {
            int x;
            int y;
        };
    };

    void f();
};

void A::f()
{
    struct B::C c;
    c.x = 1;
}