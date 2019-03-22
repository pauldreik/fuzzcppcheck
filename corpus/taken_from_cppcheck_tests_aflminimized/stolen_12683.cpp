struct A {
    enum E { };
    struct S { };
};
struct B : public A {
    B(E e);
    B(S s);
};
B::B(A::E e) { }
B::B(A::S s) { }