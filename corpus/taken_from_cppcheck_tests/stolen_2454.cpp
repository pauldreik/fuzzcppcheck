void foo() {
    FILE* f = fopen(name, "r");
    fwrite(buffer, 5, 6, f);
    fclose(f);
}