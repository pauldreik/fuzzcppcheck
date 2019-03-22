struct Foo { int f() const; float g() const; };
void test() {
    Foo f = Foo{};
    int i = f.f();
    int j = f.f();
}