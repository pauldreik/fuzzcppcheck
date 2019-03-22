void foo(FILE* f) {
    fread(buffer, 5, 6, f);
    rewind(f);
    fwrite(buffer, 5, 6, f);
}