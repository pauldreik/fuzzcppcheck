struct AB { int a; int b; };

int f() {
    struct AB ab;
    ab.a = 1;
    ab = do_something();
    return ab.a;
}