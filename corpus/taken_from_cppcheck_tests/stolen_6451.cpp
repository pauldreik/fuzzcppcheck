class foo {};
void foo(const int* cpi, foo f, bar b, bar* bp, double d, int i, bool bo) {
    printf("%u", f);
    printf("%u", "s4");
    printf("%u", d);
    printf("%u", i);
    printf("%u", cpi);
    printf("%u", b);
    printf("%u", bp);
    printf("%u", bo);
}