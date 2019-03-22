void foo() {
    wchar_t str[10];
    int i;
    unsigned int u;
    swprintf_s(str, L"%d %u", u, i, 0);
}
