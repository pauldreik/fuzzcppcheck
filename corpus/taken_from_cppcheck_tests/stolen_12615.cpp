struct Foo {
    int x;
};
void f() {
    struct Foo foo[10][10];
    foo[1][2].x = 123;
}