int foo()
{
    class B : public A {
        int a;
        int f() { return a; }
    } b;
}