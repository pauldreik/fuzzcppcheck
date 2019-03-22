class foo {};
void foo(const int* cpi, foo f, bar b, bar* bp, double d) {
    printf("%e", f);
    printf("%E", "s4");
    printf("%f", cpi);
    printf("%G", bp);
    printf("%f", d);
    printf("%f", b);
    printf("%f", (float)cpi);
}