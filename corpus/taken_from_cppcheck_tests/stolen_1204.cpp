struct A;
struct B {
    void operator()(A *a);
};
struct A {
    void dostuff() {
        B()(this);
    }
};