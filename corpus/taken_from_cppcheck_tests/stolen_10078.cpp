void f() {
    int a = 0;
    do {
        a = 64;
        foo(a);
    } while((++a) < 56);
}