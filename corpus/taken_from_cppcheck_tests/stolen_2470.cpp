void foo(FILE*& f) {
    fclose(f);
    f = fopen(name, "r");
    fread(buffer, 5, 6, f);
}