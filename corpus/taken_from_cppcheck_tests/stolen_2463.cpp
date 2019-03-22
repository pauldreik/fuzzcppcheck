void foo(FILE*& f) {
    f = fopen(name, mode);
    fwrite(buffer, 5, 6, f);
}