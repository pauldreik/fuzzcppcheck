enum class E : unsigned char { E0, E1 };
void f() {
    E arrE[] = { E::E0, E::E1 };
    x = sizeof(arrE);
}