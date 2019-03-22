void f(Foo *p) {
    free(p);
    p = (Foo *)NULL;
}