enum class E : unsigned short { E0, E1 };
void f() {
    E arrE[] = { E::E0, E::E1 };
    x = sizeof(arrE);
}