unsigned long f() { return 0; }
void foo() { printf("%lu %d %ld %I64d %I64u %f %Lf %p", f(), f(), f(), f(), f(), f(), f(), f()); }