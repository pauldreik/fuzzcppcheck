bool foo() {
    class A {}; class B {A a;};
    B b;
    foo(b.a++);
}