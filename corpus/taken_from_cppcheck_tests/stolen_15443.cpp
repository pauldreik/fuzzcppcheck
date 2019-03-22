enum E : unsigned long long { E0, E1 };
void f() {
    E arrE[] = { E0, E1 };
    x = sizeof(arrE);
}