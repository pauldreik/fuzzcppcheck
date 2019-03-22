void f() {
    enum E { };
    E *tab4 = malloc(20 * sizeof(E));
    tab4[20] = 0;
}