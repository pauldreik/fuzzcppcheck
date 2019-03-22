struct ABC { int a; int b; int c; };
void foo(int x, const struct ABC *abc);
void bar(void) {
  struct ABC abc;
  foo(123, &abc);
  return abc.b;
}