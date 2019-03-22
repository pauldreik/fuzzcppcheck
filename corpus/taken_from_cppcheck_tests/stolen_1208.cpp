struct Foo {
    void operator<<(int);
};
struct Fred {
    Foo foo;
    void x()
    {
        foo << 123;
    }
};