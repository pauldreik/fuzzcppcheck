bool foo(int i) {
    class A {};
    A a;
    foo(i, a++);
    foo(a++, i);
}