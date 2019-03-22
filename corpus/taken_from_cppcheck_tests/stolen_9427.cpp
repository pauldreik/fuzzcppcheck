void f() {
    char *p; p = do_something();
    free(p);
    p = do_something();
    free(p);
}