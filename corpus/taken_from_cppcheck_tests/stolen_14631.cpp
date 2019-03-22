struct AB { int a=1; int b; };
void f(void) {
    struct AB ab;
    int a = ab.a;
    int b = ab.b;
}