struct Base { int length() { } };
struct Derived : public Base { };
void foo(Derived * d) {
    printf("%f", d.length());
}
