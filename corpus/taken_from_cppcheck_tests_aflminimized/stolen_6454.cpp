class foo {};
void foo(char* pc, const char* cpc, wchar_t* pwc, const wchar_t* cpwc) {
    printf("%p", pc);
    printf("%p", cpc);
    printf("%p", pwc);
    printf("%p", cpwc);
    printf("%p", "s4");
    printf("%p", L"s5W");
}