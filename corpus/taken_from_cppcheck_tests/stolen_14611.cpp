struct AB { int a; int get() const; };
void f(void) {
    struct AB ab;
    ab.get();
    x = ab;
}
