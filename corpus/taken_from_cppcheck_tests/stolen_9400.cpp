void f(struct str *p) {
    free(p);
    p = p->next;
}