void f1(const char buf[]) {
    char c = buf[4];
}
void f2() {
    char x[2];
    f1(x);
}