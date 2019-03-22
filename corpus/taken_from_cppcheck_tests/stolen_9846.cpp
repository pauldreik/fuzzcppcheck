void foo(char *p) {
    if (!p) {
        (*bail)();
    }
    *p = 0;
}