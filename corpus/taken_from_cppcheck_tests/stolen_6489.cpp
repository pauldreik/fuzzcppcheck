unsigned long long f() { return 0; }
void foo() { printf("%llu %d %ld %I64d %I64u %f %Lf %p", f(), f(), f(), f(), f(), f(), f(), f()); }