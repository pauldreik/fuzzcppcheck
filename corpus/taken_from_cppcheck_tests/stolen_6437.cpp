void foo() {
    printf("%i");
    printf("%i%s", 123);
    printf("%i%s%d", 0, bar());
    printf("%i%%%s%d", 0, bar());
    printf("%idfd%%dfa%s%d", 0, bar());
    fprintf(stderr,"%u%s");
    snprintf(str,10,"%u%s");
    sprintf(string1, "%-*.*s", 32, string2);
    snprintf(a, 9, "%s%d", "11223344");
}