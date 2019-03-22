class Foo {
    int var;
    void func(int var);
};
void Foo::func(int var) {
    this->var = var;
}