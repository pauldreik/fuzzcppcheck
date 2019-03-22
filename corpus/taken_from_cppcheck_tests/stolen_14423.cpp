enum ABCD { A, B, C, D };

static void f(char *str ) {
    enum ABCD i;
    for (i = 0; i < D; i++) {
        str[i] = 0;
    }
}