struct AB { int a; int b; };
void f(void) {
    struct AB ab;
    if (x) ab = getAB();
    else ab.a = 0;
    if (ab.a == 1) b = ab.b;
}