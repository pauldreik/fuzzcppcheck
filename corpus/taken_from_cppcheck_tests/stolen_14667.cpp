void f() {
    char *p = malloc(100);
    p || assert_failed();
}