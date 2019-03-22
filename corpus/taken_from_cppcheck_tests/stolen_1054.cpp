class Fred {
    class B {
        int b;
        int getB();
        class A {
            int a;
            int getA();
        };
    };
    int B::A::getA() { return a; }
    int B::getB() { return b; }
};