enum E : wchar_t { E0, E1 };
void f() {
    E arrE[] = { E0, E1 };
    x = sizeof(arrE);
}