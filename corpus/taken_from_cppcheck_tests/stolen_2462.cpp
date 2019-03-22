void foo(FILE*& f) {
    f = _tfreopen_s(&f, name, _T("r"), f);
    fwrite(buffer, 5, 6, f);
}