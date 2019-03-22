struct A {
    int i;
};
struct B {
    A a;
};
struct C {
    B *b;
    const A& a() const {
        const B *pb = b;
        const A &ra = pb->a;
        return ra;
    }
};