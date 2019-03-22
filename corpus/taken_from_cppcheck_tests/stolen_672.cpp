extern int split();
void regress() {
    char inbuf[1000];
    char *f[10];
    split(inbuf, f, 10, "		");
}