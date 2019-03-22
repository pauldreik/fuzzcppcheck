char *foo ( char *bar ) {
    char baz[100];
    strncpy(baz, bar, 100);
    bar[99] = 0;
    return baz;
}