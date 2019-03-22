void foo(FILE*& f) {
    _wfopen_s(&f, name, L"r");
    fread(buffer, 5, 6, f);
    rewind(f);
    fwrite(buffer, 5, 6, f);
}