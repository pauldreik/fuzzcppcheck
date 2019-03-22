void foo(FILE*& f) {
    f = _tfopen(name, _T("r"));
    fread(buffer, 5, 6, f);
    rewind(f);
    fwrite(buffer, 5, 6, f);
}