unsigned long long f() { return 0; }
void foo() { printf("%I32d %I32u %I32x %llx", f(), f(), f(), f()); }