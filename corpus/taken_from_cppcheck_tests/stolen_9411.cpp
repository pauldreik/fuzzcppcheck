void f(char *p) {
    if (x)
        free(p);
    else
        p = 0;
    free(p);
}