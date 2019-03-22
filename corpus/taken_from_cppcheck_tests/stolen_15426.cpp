enum class E : wchar_t { E0, E1 };
void f() {
    x = sizeof(E :: E0);
}