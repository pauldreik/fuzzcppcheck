void foo() {
    TCHAR txt[100];
    int i;
    unsigned int u;
    TCHAR str[10];
    _stscanf_s(txt, _T("%s %d %u %[a-z]"), str, 10, &u, &i, str, 10, 0)
}
