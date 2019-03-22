float bar(int) __attribute__((pure));
char foo(int) __attribute__((pure));
int test(int a, int b) {
    if (bar(a) == bar(a)) { }
    if (unknown(a) == unknown(a)) { }
    if (foo(a) == foo(a)) { }
}