struct Foo { int f(); int g(); };
void test() {
    Foo f = Foo{};
    int i = f.f();
    int j = f.f();
}