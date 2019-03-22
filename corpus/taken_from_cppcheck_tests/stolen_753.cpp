class A {
private:
    struct X { char buf[10]; };
}

void f()
{
    X x;
    x.buf[10] = 0;
}