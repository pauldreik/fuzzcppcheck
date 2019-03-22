struct A {
    char data[4];
    struct B { char data[3]; };
    B b;
};

void f()
{
    A a;
    a.data[3] = 0;
}