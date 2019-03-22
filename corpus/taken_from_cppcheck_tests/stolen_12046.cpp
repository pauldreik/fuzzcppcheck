void f() {
    struct foo *ptr;
    memset( ptr->bar, 0, sizeof ptr->bar );
}