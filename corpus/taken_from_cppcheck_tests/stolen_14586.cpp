struct AB { int a; int b; };
void do_something(int a);
void f(void) {
    struct AB ab;
    do_something(ab.a);
}
