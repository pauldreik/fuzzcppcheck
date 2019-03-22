struct Fred { unsigned int ui() { return 0; } } f;
void foo() { printf("%u %d %ld %f %Lf %p", f.ui(), f.ui(), f.ui(), f.ui(), f.ui(), f.ui()); }