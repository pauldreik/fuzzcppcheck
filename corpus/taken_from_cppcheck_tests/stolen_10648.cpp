class A {};
class B { B(const A &a); };
const A &getA();
void f() {
    const B b(getA());
}