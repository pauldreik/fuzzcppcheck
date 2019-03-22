void foo() {
    size_t s;
    int i;
    printf("%I", s);
    printf("%I6", s);
    printf("%I6x", s);
    printf("%I16", s);
    printf("%I16x", s);
    printf("%I32", s);
    printf("%I64", s);
    printf("%I%i", s, i);
    printf("%I6%i", s, i);
    printf("%I6x%i", s, i);
    printf("%I16%i", s, i);
    printf("%I16x%i", s, i);
    printf("%I32%i", s, i);
    printf("%I64%i", s, i);
}