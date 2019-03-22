namespace A {
    namespace B {
        class C {
            double m;
            C();
        };
    }
}
using namespace A::B;
C::C() : m(42) {}