void f() {
    char buf[10];
    int i;
    for (i = 0; i < 4; i++)
        buf[i] = 131;
    buf[i] = 0;
}