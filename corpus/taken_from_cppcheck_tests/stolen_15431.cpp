enum E : unsigned char { E0, E1 };
void f() {
    E arrE[] = { E0, E1 };
    x = sizeof(arrE);
}