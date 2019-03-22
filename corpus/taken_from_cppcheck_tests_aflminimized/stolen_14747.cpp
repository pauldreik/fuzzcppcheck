struct Foo {
    void F1() {}
    void F2() {}
};
int main(int argc, char *argv[]) {
    Foo foo;
    void (Foo::*ptr)();
    ptr = (argc > 1 && !strcmp(argv[1], "F2")) ? &Foo::F2 : &Foo::F1;
    (foo.*ptr)();
}