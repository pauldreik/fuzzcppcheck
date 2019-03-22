void foo(FILE*& f) {
    f = freopen(name, "r", f);
    fwrite(buffer, 5, 6, f);
}