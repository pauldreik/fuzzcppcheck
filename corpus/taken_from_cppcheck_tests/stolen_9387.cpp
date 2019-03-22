void foo() {
    char *p = malloc(10);
    p = strcpy(p,q);
    free(p);
}