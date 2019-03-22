void foo(FILE*& f) {
    f = fopen(name, "w+");
    fread(buffer, 5, 6, f);
}