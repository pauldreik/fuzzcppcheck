void a(int *p) { *p = 0; }void b() {
    int buf[10];
    a(buf);
}