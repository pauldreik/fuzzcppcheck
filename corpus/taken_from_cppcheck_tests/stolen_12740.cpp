namespace Ns { class C; }
void f1() { char *p; *p = 0; }
class Ns::C* p;
void f2() { char *p; *p = 0; }
