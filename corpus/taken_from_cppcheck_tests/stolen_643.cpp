enum E : unsigned int { e1, e2 };
void f() {
    E arrE[] = { e1, e2 };
    arrE[sizeof(arrE)] = e1;
}