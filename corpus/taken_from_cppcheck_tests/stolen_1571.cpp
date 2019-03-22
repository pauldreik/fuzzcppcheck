struct Foo {
    int * p;
    char c;
    Foo() { memset(p, 0, sizeof(int)); }
};