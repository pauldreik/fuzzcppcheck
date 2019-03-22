void foo(FILE*& f) {
    f = _tfreopen(name, _T("r"), f);
    fwrite(buffer, 5, 6, f);
}