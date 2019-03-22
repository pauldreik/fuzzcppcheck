void foo() {
    char str[10];
    int i;
    unsigned int u;
    _snprintf_s(str, sizeof(str), _TRUNCATE, "%d %u", u, i, 0);
}
