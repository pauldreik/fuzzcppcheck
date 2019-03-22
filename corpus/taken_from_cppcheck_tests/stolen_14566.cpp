void a(char *buf) {
    buf[0] = 0;
}
void b() {
    char buf[10];
    a(buf);
    buf[1] = buf[0];
}