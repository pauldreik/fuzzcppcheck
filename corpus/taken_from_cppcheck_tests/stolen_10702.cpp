struct AB { int a; int b; };

int f() {
    struct AB ab;
    ab.a = 1;
    do_something(&ab);
    ab.a = 2;
    return ab.a;
}