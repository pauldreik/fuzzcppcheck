struct Fred { int i; } f;
struct Fred & bar() { };
void foo() { printf("%d %u %lu %f %Lf %p", bar().i, bar().i, bar().i, bar().i, bar().i, bar().i); }