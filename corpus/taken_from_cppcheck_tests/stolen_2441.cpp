void foo(FILE*& f) {
    f = fopen(name, "r+");
    fwrite(buffer, 5, 6, f);
}