void foo(FILE * fp) {
    int i;
    unsigned int u;
    _ftprintf_s(fp, _T("%d %u"), u, i, 0);
}
