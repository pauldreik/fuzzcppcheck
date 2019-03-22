short f() { return 0; }
void foo() { printf("%d %u %lu %I64u %I64d %f %Lf %p", f(), f(), f(), f(), f(), f(), f(), f()); }