void foo() {
    FILE* f = fopen("", "a");
    fclose(f);
    f = fopen("", "r");
    fseek(f, 0, SEEK_SET);
}