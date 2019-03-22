struct AB { int a[10]; int b; };
void f() {
    struct AB ab;
    int *p = ab.a;
}