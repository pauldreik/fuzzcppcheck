struct AB { int a; void dostuff() {} };
void f(void) {
    struct AB ab;
    ab.dostuff();
    x = ab;
}
