struct AB { int a; int b; };
int foo(AB *ab);
void bar() {
  AB ab;
  foo(&ab); 
};