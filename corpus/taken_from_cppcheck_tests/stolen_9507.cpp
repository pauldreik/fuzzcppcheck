void f() {
    FILE*f=fopen(fname,a);
    std::shared_ptr<FILE> fp{f, +[](FILE* x) { fclose(x); }};
}