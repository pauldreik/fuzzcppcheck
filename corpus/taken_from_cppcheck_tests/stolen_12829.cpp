struct C { int i; static int si; float f; int* ip; float* fp};
void foo(float a) { }
void foo(int a) { }
void foo(int* a) { }
void func(C c, C* cp) {
    foo(c.i);
    foo(cp->i);
    foo(c.f);
    foo(c.si);
    foo(C::si);
    foo(c.ip);
    foo(c.fp);
}