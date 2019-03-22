void foo() {
    wchar_t txt[100];
    int i;
    unsigned int u;
    wchar_t str[10];
    swscanf_s(txt, L"%s %d %u %[a-z]", str, 10, &u, &i, str, 10, 0)
}
