struct AB { char a[10]; };
void f(void) {
    struct AB ab;
    strcpy(x, ab.a);
}
