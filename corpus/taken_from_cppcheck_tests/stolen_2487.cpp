void foo(FILE* f) {
    fread(buffer, 5, 6, f);
    fsetpos(f, pos);
    fwrite(buffer, 5, 6, f);
}