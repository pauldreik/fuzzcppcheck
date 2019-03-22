void foo(FILE*& f) {
    f = _tfopen(name, _T("r+"));
    fwrite(buffer, 5, 6, f);
}