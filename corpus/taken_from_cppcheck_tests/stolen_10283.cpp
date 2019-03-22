void foo(int x) {
    printf("%i", ({int x = do_something(); x == 0;}));
}