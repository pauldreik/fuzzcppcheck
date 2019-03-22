struct Foo : std::Bar {
    int i;
    Foo(int i)
        : std::Bar(), i{i} {}
};