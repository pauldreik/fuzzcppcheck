void foo(FILE* f) {
    fread(buffer, 5, 6, f);
    fwrite(buffer, 5, 6, f);
}