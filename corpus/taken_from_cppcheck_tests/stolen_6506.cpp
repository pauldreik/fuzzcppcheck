struct Fred { int i; } f[2];
struct Fred * bar() { return f; };
void foo() { printf("%d %u %lu %f %Lf %p", bar()[0].i, bar()[0].i, bar()[0].i, bar()[0].i, bar()[0].i, bar()[0].i); }