void foo() {
    swprintf(string1, L"%i", 32, string2);
    swprintf(string1, L"%s%s", L"a", string2);
    swprintf(string1, 6, L"%i", 32, string2);
    swprintf(string1, 6, L"%i%s", 32, string2);
}