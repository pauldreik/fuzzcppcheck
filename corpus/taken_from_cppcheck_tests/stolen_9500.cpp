void f() {
    FILE*f=fopen(fname,a);
    std::unique_ptr<FILE> fp{f};
}