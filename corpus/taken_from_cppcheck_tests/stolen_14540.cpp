void f() {
    int buf[10];
    int &x = buf[0];
    buf[0] = 0;
    x++;
}