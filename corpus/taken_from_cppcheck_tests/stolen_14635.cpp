class C { C(); }
struct A {
    C m;
    int i;
};
void foo() {
    A a;
    x = a.m;
}