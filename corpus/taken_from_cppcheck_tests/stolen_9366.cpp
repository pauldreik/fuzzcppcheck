void foo(FILE * fp) {
    int i;
    unsigned int u;
    wchar_t str[10];
    fwscanf_s(fp, L"%s %d %u %[a-z]", str, 10, &u, &i, str, 10, 0)
}
