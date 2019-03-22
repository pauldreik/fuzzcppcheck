void foo(FILE*& f) {
    f = tmpfile();
    fread(buffer, 5, 6, f);
}