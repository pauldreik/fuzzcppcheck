struct Fred { int i; } f;
void foo() { printf("%d %u %lu %f %Lf %p", f.i, f.i, f.i, f.i, f.i, f.i); }