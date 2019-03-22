void foo() {
    char *p = malloc(100);
    char *tmp = realloc(p,1000);
    if (!tmp) free(p);
}