int foo(char *a) {
    int x;

    for (int i = 0; i < 10; ++i) {
        if (a[i] == 'x') {
            x = i;
            break;
        }
    }

    return x;
}