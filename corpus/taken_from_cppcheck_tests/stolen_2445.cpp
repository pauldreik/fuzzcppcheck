void foo(FILE*& f) {
    _wfopen_s(&f, name, L"r+");
    fwrite(buffer, 5, 6, f);
}