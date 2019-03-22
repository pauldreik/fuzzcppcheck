class foo {};
void foo(const int* cpi, foo f, bar b, bar* bp, char c) {
    printf("%p", f);
    printf("%p", c);
    printf("%p", bp);
    printf("%p", cpi);
    printf("%p", b);
}