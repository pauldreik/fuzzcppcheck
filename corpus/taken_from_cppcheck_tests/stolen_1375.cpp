struct A { struct B; };
struct A::B {
    B() = default;
    B(const B&) {}
};