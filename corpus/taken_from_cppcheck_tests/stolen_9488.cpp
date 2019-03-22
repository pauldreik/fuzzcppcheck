void f() {
    void *p;
    if (NULL == (p = malloc(4)))
        return;
    free(p);
}