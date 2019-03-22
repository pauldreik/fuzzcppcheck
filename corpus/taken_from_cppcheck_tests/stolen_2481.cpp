void foo() {
    FILE f[2];
    f[0] = fopen("1", "w");
    f[1] = fopen("2", "w");
    fclose(f[0]);
    fclose(f[1]);
}