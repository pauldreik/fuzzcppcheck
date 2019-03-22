long long f() { return 0; }
void foo() { printf("%lld %u %lu %I64u %I64d %f %Lf %p", f(), f(), f(), f(), f(), f(), f(), f()); }