struct X { float f; };
float f(struct X x) { return x.f == x.f; }