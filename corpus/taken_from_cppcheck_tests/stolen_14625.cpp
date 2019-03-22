struct S { int n; int m; };
void f(void) {
 struct S s;
 for (s.n = 0; s.n <= 10; s.n++) { }
}