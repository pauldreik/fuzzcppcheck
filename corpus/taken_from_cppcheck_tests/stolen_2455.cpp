void foo(FILE*& f) {
    f = fopen(name, "a");
    fwrite(buffer, 5, 6, f);
    bar(f);
    fread(buffer, 5, 6, f);
}