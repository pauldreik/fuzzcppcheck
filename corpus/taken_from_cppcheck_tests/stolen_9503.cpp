struct deleter { void operator()(FILE* f) { fclose(f); }};
void f() {
    FILE*f=fopen(fname,a);
    std::unique_ptr<FILE, deleter> fp{f};
}