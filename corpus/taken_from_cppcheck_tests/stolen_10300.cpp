class Foo {
    int var;
    void func();
};
void Foo::func() {
    this->var = var;
}