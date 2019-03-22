class foo {};
void foo(const int* cpi, foo f, bar b, bar* bp, double d, int i, unsigned int u) {
    printf("%X", f);
    printf("%c", "s4");
    printf("%o", d);
    printf("%x", cpi);
    printf("%o", b);
    printf("%X", bp);
    printf("%X", u);
    printf("%X", i);
}