void foo() {
    TCHAR str[10];
    int i;
    unsigned int u;
    _stprintf_s(str, sizeof(str) / sizeof(TCHAR), _T("%d %u"), u, i, 0);
}
