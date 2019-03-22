void foo(FILE*& f) {
    f = _wfopen(name, L"r+");
    fwrite(buffer, 5, 6, f);
}