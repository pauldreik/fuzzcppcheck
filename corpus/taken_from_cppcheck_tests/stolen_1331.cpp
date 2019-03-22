struct Foo : Bar {
    int i;
    Foo(int i)
        : Bar(), i(i) {}
};