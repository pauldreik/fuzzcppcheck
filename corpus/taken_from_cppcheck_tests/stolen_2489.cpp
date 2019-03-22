void foo(FILE* f) {
    fread(buffer, 5, 6, f);
    long pos = ftell(f);
    fwrite(buffer, 5, 6, f);
}