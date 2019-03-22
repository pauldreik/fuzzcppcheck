class Foo {
    int a;
public:
    Foo() : a(0) {}
    Foo& operator=(const Foo&);
};

Foo& Foo::operator=(const Foo& rhs) {
    if (&rhs != this)
    {
    }
    return *this;
}