void func1() {
    static char tmp1[256];
    char *p = tmp1;
    free(p);
}