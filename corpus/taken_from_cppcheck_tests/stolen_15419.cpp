enum class E : unsigned int { E0, E1 };
void f() {
    x = sizeof(E :: E0);
}