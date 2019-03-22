struct Foo {
    int i;
    char c;
    Foo() { memset(&i, 0, sizeof(int)); }
};