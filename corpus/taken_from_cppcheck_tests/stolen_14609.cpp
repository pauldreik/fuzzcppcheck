struct AB { int a; int b; };
void do_something(const struct AB ab);
void f(void) {
    struct AB ab;
    ab = getAB();
    do_something(ab);
}
