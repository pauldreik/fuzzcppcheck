void f() {
    union {
        struct {
            char a, b, c, d;
        };
        int abcd;
    };
    g(abcd);
    h(a, b, c, d);
}