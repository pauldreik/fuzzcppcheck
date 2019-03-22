void f() {
    enum E { Size = 20 };
    E *tab4 = malloc(4 * Size);
    tab4[Size] = 0;
}