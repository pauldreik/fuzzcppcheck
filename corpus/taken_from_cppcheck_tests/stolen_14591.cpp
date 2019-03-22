struct AB { int a; int b; };
void f(void) {
    struct AB ab;
    ab.a = 1;
    x = *(&ab);
}
