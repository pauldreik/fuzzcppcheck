void f(int i) {
    i = 1;
    asm("foo");
    i = 1;
}