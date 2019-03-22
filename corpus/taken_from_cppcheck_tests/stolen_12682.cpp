struct A {
    enum E { };
    int a[10];
};
struct B : public A {
    void foo(B::E e) { }
};