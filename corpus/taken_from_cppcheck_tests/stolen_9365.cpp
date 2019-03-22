void foo(FILE * fp) {
    int i;
    unsigned int u;
    char str[10];
    fscanf_s(fp, "%s %d %u %[a-z]", str, 10, &u, &i, str, 10, 0)
}
