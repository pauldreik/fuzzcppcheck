struct Fred { int i; } f;
const struct Fred & bar() { };
void foo() { printf("%d %u %lu %f %Lf %p", bar().i, bar().i, bar().i, bar().i, bar().i, bar().i); }