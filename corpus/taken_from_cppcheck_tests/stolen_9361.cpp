void foo() {
    char txt[100];
    int i;
    unsigned int u;
    char str[10];
    sscanf_s(txt, "%s %d %u %[a-z]", str, 10, &u, &i, str, 10, 0)
}
