void foo(FILE*& f) {
    f = tmpfile();
    fwrite(buffer, 5, 6, f);
}