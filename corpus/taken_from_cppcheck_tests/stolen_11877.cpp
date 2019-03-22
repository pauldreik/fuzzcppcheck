namespace NS {
    typedef int (*T)();
    class A {
        T f();
    };
}
NS::T NS::A::f() {}