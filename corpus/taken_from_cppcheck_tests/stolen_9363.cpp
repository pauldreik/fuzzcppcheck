void foo(FILE * fp) {
    int i;
    unsigned int u;
    TCHAR str[10];
    _ftscanf_s(fp, _T("%s %d %u %[a-z]"), str, 10, &u, &i, str, 10, 0)
}
