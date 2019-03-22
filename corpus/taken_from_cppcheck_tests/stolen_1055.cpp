class Fred {
    class B {
        int b;
        int getB();
        class A {
            int a;
            int getA();
        };
    };
};
int Fred::B::A::getA() { return a; }
int Fred::B::getB() { return b; }