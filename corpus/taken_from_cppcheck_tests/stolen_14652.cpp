static void f(void) {
    struct ABC *abc;
    for (i = 0; i < 10; i++)
        x += sizeof(*abc);
}