struct AB { int a; struct { int b; int c; } s; };
void do_something(const struct AB ab);
void f(void) {
    struct AB ab;
    ab.a = 1;
    ab.s.b = 2;
    ab.s.c = 3;
    do_something(ab);
}
