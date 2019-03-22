void f1(char *buf) {
    buf[4] = 0;
}
void f2() {
    int x[2];
    f1(x);
}