void foo(FILE*& f) {
    f = _wfreopen(name, L"r", f);
    fwrite(buffer, 5, 6, f);
}