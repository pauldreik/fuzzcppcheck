void foo(int x) {
    printf("%i", ({x == 0; x > 0 ? 10 : 20}));
}