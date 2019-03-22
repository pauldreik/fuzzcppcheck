struct C { C() {} };
void foo(C*& p) {
    p = new C();
}