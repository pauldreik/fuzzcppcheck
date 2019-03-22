class foo {};
void foo(const int* cpi, foo f, bar b, bar* bp, double d, unsigned int u, unsigned char uc) {
    printf("%i", f);
    printf("%d", "s4");
    printf("%d", d);
    printf("%d", u);
    printf("%d", cpi);
    printf("%i", b);
    printf("%i", bp);
    printf("%i", uc);
}