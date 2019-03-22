struct X { int i; };
int f(struct X x) { return x.i == x.i; }