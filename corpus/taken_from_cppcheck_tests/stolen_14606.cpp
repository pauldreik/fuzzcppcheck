struct AB { unsigned char a[10]; };
void f(void) {
    struct AB ab;
    strcpy((char *)ab.a, STR);
}
