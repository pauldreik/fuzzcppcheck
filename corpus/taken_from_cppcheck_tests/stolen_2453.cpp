void foo(FILE*& f) {
    f = fopen(name, "a+");
    fread(buffer, 5, 6, f);
}