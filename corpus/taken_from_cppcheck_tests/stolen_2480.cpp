void foo() {
    FILE *a = fopen("aa", "r");
    while (fclose(a)) {}
}