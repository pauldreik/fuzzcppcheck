void foo(int x) {
    for (int i = 0; i < 10; i += (x == 5) ? 1 : 2) {
        x++;
    }
}