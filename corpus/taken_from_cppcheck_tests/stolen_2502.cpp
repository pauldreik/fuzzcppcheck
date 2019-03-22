void foo(FILE*& f) {
    f = fopen(path, "w");
    fflush(f);
}