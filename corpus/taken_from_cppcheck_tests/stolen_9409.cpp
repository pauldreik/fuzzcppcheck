struct Foo {
    Foo();
    Foo* ptr;
    void func();
};
void bar(Foo* foo) {
    delete foo->ptr;
    foo->ptr = new Foo;
    foo->ptr->func();
}