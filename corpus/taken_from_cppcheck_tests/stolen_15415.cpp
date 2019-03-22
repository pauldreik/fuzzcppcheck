enum class E : signed short { E0, E1 };
void f() {
    x = sizeof(E :: E0);
}