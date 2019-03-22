struct A { int *x; };
void foo(void *info, void*p);
void bar(void) {
  struct A *delete = 0;
  foo( info, NULL );
}