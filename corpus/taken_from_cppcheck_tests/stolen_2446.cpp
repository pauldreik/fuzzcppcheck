void foo(FILE*& f) {
    _tfopen_s(&f, name, _T("r+"));
    fwrite(buffer, 5, 6, f);
}