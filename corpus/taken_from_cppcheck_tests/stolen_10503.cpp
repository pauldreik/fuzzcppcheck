struct Foo { int f() const; int g() const; };
void test() {
    Foo f = Foo{};
    int i = f.f();
    int j = f.f();
}