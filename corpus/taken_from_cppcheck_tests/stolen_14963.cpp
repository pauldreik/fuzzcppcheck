void f(int mode) {
    int x = 0;

    for (int i = 0; i < 10; i++) {
        if (mode == 0x04)
            x = 0;
        if (mode == 0x0f) {
            x = address;
            data[x] = 0;
        }
    }
}