struct Foo {
    void operator<<(int);
};
struct Fred {
    Foo foo;
    void x()
    {
        std::cout << foo << 123;
    }
};