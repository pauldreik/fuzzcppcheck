void f(void) {
    int bit, x;
    for (bit = 1, x = 0; bit < 128; bit = bit << 1, x++) {
        z = x;
    }
}
