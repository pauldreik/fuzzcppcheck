int f() {
    char a[10];
    char *b[] = {a};
    foo(b);
    return atoi(a);
}