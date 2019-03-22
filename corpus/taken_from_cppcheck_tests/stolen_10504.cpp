struct Foo { int f() const; int g() const; };
void test() {
    Foo f = Foo{};
    Foo f2 = Foo{};
    int i = f.f();
    int j = f.f();
}