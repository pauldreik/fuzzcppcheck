void g(Foo *);
void f() {
    g(reinterpret_cast<Foo*>(0));
}
