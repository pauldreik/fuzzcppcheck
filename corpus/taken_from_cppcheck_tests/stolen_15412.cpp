enum class E : signed char { E0, E1 };
void f() {
    x = sizeof(E :: E0);
}