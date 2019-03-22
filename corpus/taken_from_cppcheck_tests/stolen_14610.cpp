struct AB { int a; int b; void set(); };
void f(void) {
    struct AB ab;
    ab.set();
    x = ab;
}
