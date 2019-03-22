void f() {
    enum E { Size = 20 };
    E *tab4 = malloc(Size * 4);
    tab4[Size] = 0;
}