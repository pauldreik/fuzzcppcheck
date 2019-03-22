void foo() {
    wchar_t str[10];
    int i;
    unsigned int u;
    _snwprintf_s(str, sizeof(str) / sizeof(wchar_t), _TRUNCATE, L"%d %u", u, i, 0);
}
