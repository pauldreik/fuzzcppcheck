void f() {
    struct thing { int value; };
    thing it;
    int& referenced_int = it.value;
    referenced_int = 123;
}