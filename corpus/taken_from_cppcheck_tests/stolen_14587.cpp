struct AB { int a; int b; };
void do_something(const struct AB &ab) { a = ab.a; }
void f(void) {
    struct AB ab;
    ab.a = 0;
    do_something(ab);
}
