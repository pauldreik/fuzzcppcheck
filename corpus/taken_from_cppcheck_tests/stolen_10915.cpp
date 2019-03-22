bool foo() {
    class A {}; class B {A a;};
    B b;
    b.a++;
}