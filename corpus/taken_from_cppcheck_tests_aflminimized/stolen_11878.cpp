namespace NS1 {
    namespace NS2 {
        typedef int (*T)();
        class A {
            T f();
        };
    }
}
namespace NS1 {
    namespace NS2 {
        T A::f() {}
    }
}