struct callbacks {
    void (*s)(void);
};
void something(void) {}
void f() {
    struct callbacks ops = { .s = ops.s };
}
