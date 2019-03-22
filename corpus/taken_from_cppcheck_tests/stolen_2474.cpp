void foo() {
    FILE* f[3];
    f[0] = fopen(name, mode);
    fclose(f[0]);
}