void f() {
    int is[10];
    memset(is, 0xEE, 40);
    unsigned char* cs = malloc(256);
    memset(cs, -1, 256);
    short* ss[30];
    memset(ss, -128, 60);
    char cs2[30];
    memset(cs2, 255, 30);
    char cs3[30];
    memset(cs3, 0, 30);
}
