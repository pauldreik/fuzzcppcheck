void f() {
    int x;
    for (int x = 0; (x = do_something()) != 0;)
        x;
}