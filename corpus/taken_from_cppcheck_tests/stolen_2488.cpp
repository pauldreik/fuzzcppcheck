void foo(FILE* f) {
    fread(buffer, 5, 6, f);
    fseek(f, 0, SEEK_SET);
    fwrite(buffer, 5, 6, f);
}