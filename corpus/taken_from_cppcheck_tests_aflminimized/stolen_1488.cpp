class A {
public:
    A();
    struct B {
        explicit B(int x);
        struct C {
            explicit C(int y);
            struct D {
                D(const D &);
                int d;
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
A::B::C::D::D(const A::B::C::D & d){}