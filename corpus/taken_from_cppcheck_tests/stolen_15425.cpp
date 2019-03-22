enum class E : unsigned long long { E0, E1 };
void f() {
    x = sizeof(E :: E0);
}