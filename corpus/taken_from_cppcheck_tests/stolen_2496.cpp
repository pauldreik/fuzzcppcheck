void foo() {
    FILE* f = fopen("", "a");
    fseek(f, 0, SEEK_SET);
}