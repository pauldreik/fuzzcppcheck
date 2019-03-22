struct AB { int a; int b; };
void f(void) {
    struct AB ab;
    assign(&ab.a, 0);
}
