struct Foo {
    int x;
};

struct Bar {
    Foo foo;
    int x;
    void f();
};

void Bar::f()
{
    foo.x = x;
}
