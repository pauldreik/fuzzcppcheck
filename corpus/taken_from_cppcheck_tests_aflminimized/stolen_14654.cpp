void f(void) {
    struct Foo *foo;
    while (true) {
            foo = malloc(sizeof(*foo));
            foo->x = 0;
    }
}