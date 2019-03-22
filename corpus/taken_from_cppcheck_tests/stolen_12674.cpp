struct AB { int a; int b; };
int foo(struct AB *ab);
void bar() {
  struct AB ab;
  foo(&ab); 
};