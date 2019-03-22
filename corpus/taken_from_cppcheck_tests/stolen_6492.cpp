long double f() { return 0; }
void foo() { printf("%Lf %d %ld %u %lu %I64d %I64u %f %p", f(), f(), f(), f(), f(), f(), f(), f(), f()); }