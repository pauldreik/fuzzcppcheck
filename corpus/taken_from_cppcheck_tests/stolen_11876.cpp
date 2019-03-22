namespace NS {
    typedef int (*T)();
    class A {
        T f();
    };
}
namespace NS {
    T A::f() {}
}