struct A { int i; };
struct B { double d; };
int    foo(struct A a);
double foo(struct B b);
void bar() {
  struct B b;
  foo(b);
}