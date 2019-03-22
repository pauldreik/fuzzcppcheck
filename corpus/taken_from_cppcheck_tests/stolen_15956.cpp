class A {
    class B;
};
class A::B {
    B();
    int* i;
};
A::B::B() :
    i(0)
{}