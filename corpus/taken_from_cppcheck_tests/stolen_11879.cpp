namespace NS1 {
    namespace NS2 {
        typedef int (*T)();
        class A {
            T f();
        };
    }
}
namespace NS1 {
    NS2::T NS2::A::f() {}
}