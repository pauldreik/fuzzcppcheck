char *myalloc(void) {
    return malloc(100);
}
void func() {
    struct ABC abc;
    abc.a = myalloc();
}