void foo() {
    char str[10];
    int i;
    unsigned int u;
    sprintf_s(str, sizeof(str), "%d %u", u, i, 0);
}
