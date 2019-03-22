void foo(FILE*& f) {
    _tfopen_s(&f, name, _T("r"));
    fread(buffer, 5, 6, f);
    rewind(f);
    fwrite(buffer, 5, 6, f);
}