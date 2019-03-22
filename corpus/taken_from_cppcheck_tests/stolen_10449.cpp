struct A { int f() const; };
A g();
void foo() {
    for (const A x = A();;) {
        const int a = x.f();
        x = g();
        if (x.f() == a) break;
    }
}
