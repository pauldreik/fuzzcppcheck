void foo(char *p) {
    if (!p) {
        abort();
    }
    *p = 0;
}