int f() {
    char *p = NULL;
    if (x) { p = malloc(10); }
    else { return 0; }
    free(p);
}