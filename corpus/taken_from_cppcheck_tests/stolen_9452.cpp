void *f(int a) {
    char *p = malloc(10);
    if (a == 2) { free(p); return ((void*)1); }
    free(p);
    return 0;
}