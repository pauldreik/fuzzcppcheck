struct AB { int a; int b; };

int f() {
    struct AB ab;
    ab.a = 1;
    ab.a = 2;
    return ab.a;
}