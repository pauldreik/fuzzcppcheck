struct AB { int a; int b; };
int foo(struct AB *ab);
void bar() {
  AB ab;
  foo(&ab); 
};