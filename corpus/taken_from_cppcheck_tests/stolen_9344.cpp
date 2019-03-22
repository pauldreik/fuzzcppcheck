void foo() {
    TCHAR str[10];
    int i;
    unsigned int u;
    _sntprintf_s(str, sizeof(str) / sizeof(TCHAR), _TRUNCATE, _T("%d %u"), u, i, 0);
}
