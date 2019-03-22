void foo(struct str *d) {
    struct str *p = malloc(10);
    d->p = p;
}