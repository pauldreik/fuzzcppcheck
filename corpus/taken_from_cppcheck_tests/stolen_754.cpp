class A {
public:
    struct X { char buf[10]; };
}

void f()
{
    A::X x;
    x.buf[10] = 0;
}