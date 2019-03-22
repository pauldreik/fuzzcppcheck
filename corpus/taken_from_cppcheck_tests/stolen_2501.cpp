void foo(FILE*& f) {
    f = fopen(path, "r");
    fflush(f);
}