struct AB { int a; int b; };
void do_something(const struct AB ab);
void f(void) {
    struct AB ab;
    ab.a = 0;
    ab.b = 0;
    do_something(ab);
}
