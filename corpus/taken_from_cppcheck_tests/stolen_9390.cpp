void foo() {
    char *p = x();
    free(p);
    p = NULL;
}