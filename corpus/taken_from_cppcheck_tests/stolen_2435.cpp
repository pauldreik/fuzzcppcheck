void foo(FILE*& f) {
    f = _wfopen(name, L"r");
    fread(buffer, 5, 6, f);
    rewind(f);
    fwrite(buffer, 5, 6, f);
}