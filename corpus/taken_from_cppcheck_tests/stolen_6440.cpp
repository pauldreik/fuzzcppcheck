void foo(char *str) {
    printf("%i", 0);
    printf("%i%s", 123, bar());
    printf("%i%s%d", 0, bar(), 43123);
    printf("%i%%%s%d", 0, bar(), 43123);
    printf("%idfd%%dfa%s%d", 0, bar(), 43123);
    printf("%"PRId64"", 123);
    fprintf(stderr,"%"PRId64"", 123);
    snprintf(str,10,"%"PRId64"", 123);
    fprintf(stderr, "error: %m");
    printf("string: %.*s", len, string);
    fprintf(stderr, "%*cText.", indent, ' ');
    sprintf(string1, "%*", 32);
}