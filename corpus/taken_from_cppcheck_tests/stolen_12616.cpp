struct Foo {
    int x;
};
void f() {
    struct Foo foo[10];
    (foo[1]).x = 123;
}