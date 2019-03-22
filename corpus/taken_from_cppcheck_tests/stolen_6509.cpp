struct Fred { int32_t i; } f;
struct Fred & bar() { };
void foo() { printf("%d %ld %u %lu %f %Lf", bar().i, bar().i, bar().i, bar().i, bar().i, bar().i); }