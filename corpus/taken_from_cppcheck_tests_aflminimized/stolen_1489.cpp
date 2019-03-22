class A {
public:
    A();
    struct B {
        explicit B(int x);
        struct C {
            explicit C(int y);
            struct D {
                struct E { int e; };
                struct E d;
                explicit D(const E &);
            };
            int c;
        };
        int b;
    };
private:
    int a;
    B b;
};
A::A(){}
A::B::B(int x){}
A::B::C::C(int y){}
A::B::C::D::D(const A::B::C::D::E & e){}