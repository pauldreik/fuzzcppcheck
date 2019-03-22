void foo() {
    int i;
    unsigned int u;
    TCHAR str[10];
    _tscanf_s(_T("%s %d %u %[a-z]"), str, 10, &u, &i, str, 10, 0)
}
