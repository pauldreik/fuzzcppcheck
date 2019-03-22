void foo(FILE*& f) {
    f = _wfreopen_s(&f, name, L"r", f);
    fwrite(buffer, 5, 6, f);
}