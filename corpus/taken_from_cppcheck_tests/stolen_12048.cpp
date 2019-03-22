void f() {
    struct foo {
        char *bar;
    }* ptr;
    memset( ptr->bar, 0, sizeof ptr->bar );
}