void foo() {
    FILE* f = fopen("", "w");
    fseek(f, 0, SEEK_SET);
}