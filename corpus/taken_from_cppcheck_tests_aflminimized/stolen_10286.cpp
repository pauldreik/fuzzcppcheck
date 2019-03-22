void foo(int x) {
    for (int i = (x == 0) ? 0 : 5; i < 10; i ++) {
        x++;
    }
}