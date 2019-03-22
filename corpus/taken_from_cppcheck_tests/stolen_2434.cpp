void foo(FILE*& f) {
    f = fopen(name, "r");
    fread(buffer, 5, 6, f);
    rewind(f);
    fwrite(buffer, 5, 6, f);
}