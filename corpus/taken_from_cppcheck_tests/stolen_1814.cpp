void f() {
    short ss[] = {1, 2};
    memset(ss, 256, 4);
    short ss2[2];
    memset(ss2, -129, 4);
}
