enum E : signed short { E0, E1 };
void f() {
    E arrE[] = { E0, E1 };
    x = sizeof(arrE);
}