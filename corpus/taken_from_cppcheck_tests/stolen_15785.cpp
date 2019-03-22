int test_input_int(int a, int b) {
    int x;
    if (a == 1)
        x = b;
    else
        abort();
    a = x + 1;
}
