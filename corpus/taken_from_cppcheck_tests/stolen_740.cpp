void foo ( char *bar ) {
    char baz[100];
    strncpy(baz, bar, 100);
    foo(baz);
    foo(baz);
}