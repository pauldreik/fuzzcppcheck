enum class E : unsigned short { E0, E1 };
void f() {
    x = sizeof(E :: E0);
}