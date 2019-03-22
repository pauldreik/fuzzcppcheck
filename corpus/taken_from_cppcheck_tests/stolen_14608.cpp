struct AB { int a; };
void f(void) {
    struct AB ab;
    dosomething(ab.a);
}
