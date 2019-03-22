class C {
    int x;
    void g() { return x*x; }
    void f(Foo z);
};

void C::f(Foo z) {
    x = 2;
    x = z.g();
}