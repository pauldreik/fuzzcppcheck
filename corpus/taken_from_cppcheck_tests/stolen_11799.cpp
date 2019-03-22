class A {
public:
    typedef char CHAR_A;
    CHAR_A funA();
    class B {
    public:
        typedef short SHRT_B;
        B::SHRT_B funB();
        class C {
        public:
            typedef int INT_C;
            C::INT_C funC();
            struct D {
                typedef long LONG_D;
                D::LONG_D funD();
                C::D::LONG_D d;
            };
            B::C::INT_C c;
        };
        B::SHRT_B b;
    };
    CHAR_A a;
};
A::CHAR_A A::funA() { return a; }
A::B::SHRT_B A::B::funB() { return b; }
A::B::C::INT_C A::B::C::funC() { return c; }A::B::C::D::LONG_D A::B::C::D::funD() { return d; }