void f() {
    char *p = malloc(100);
    if (dostuff(p==NULL,0))
        return;
    free(p);
}