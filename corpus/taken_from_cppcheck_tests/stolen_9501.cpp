void f() {
    FILE*f=fopen(fname,a);
    std::unique_ptr<FILE, decltype(&fclose)> fp{f, &fclose};
}