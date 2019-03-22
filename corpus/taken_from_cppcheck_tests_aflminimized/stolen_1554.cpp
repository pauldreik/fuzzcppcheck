struct A {
    int a;
    int b;
    int c;
    A(int x = 0, int y = 0, int z = 0);
};
A::A(int x = 0, int y = 0, int z = 0) { } 
struct B {
    int a;
    int b;
    int c;
    B(int x = 0, int y = 0, int z = 0);
};
B::B(int x, int y, int z) { } 
struct C {
    int a;
    int b;
    int c;
    C(int, int, int);
};
C::C(int x = 0, int y = 0, int z = 0) { } 
struct D {
    int a;
    int b;
    int c;
    D(int, int, int);
};
D::D(int x, int y, int z) { } 
struct E {
    int a;
    int b;
    int c;
    E(int x, int y, int z);
};
E::E(int, int, int) { } 
struct F {
    int a;
    int b;
    int c;
    F(int x = 0, int y = 0, int z = 0);
};
F::F(int, int, int) { }
