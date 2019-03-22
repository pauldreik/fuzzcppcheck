void f(void) {
    struct AB ab;
    int x;
    ab.a = (addr)&x;
    dostuff(&ab,0);
}
