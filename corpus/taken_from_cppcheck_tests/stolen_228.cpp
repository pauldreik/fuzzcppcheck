int& g(int& i) { return i; }
int& f() { return g(f()); }
