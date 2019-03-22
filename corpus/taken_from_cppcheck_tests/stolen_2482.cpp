void foo(FILE* f) {
    fwrite(buffer, 5, 6, f);
    fread(buffer, 5, 6, f);
}