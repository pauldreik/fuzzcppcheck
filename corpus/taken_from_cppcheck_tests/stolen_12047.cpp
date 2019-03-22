void f() {
    struct foo {
        char bar[10];
    }* ptr;
    memset( ptr->bar, 0, sizeof ptr->bar );
}