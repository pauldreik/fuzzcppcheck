struct Fred { unsigned int u; } f;
void foo() { printf("%u %d %ld %f %Lf %p", f.u, f.u, f.u, f.u, f.u, f.u); }