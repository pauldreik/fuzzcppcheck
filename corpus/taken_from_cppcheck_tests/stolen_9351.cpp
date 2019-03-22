void foo(FILE * fp) {
    int i;
    unsigned int u;
    fwprintf_s(fp, L"%d %u", u, i, 0);
}
