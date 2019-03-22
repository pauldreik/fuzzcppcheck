class foo {};
const char* get() const { return 0; }
void f(foo x) { if (get()) x += get(); }
