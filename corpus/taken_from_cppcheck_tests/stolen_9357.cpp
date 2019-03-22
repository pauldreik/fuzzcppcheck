void foo() {
    int i;
    unsigned int u;
    wchar_t str[10];
    wscanf_s(L"%s %d %u %[a-z]", str, 10, &u, &i, str, 10, 0)
}
