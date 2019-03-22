struct AB { int a; int b; };
int foo(AB *ab);
void bar() {
  struct AB ab;
  foo(&ab); 
};