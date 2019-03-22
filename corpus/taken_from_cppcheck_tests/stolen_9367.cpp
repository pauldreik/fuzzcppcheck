void foo() {
    WCHAR msStr1[5] = {0};
    wscanf_s(L"%4[^-]", msStr1, _countof(msStr1));
}
