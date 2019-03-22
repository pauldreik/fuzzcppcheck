void foo(FILE*& f) {
    f = fopen(name, "w");
    fwrite(buffer, 5, 6, f);
    rewind(f);
    fread(buffer, 5, 6, f);
}