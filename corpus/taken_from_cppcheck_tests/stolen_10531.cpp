struct Foo { int f() const; int g(int) const; };
void test() {
    Foo f = Foo{};
    int i = f.f();
    int j = f.f();
}