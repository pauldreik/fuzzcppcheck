class C {
    int x;
    void g() { return x * x; }
    void f();
};

void C::f() {
    x = 2;
    x = g();
}