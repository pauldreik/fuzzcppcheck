void fn() {
    typedef foo<> bar;
    while (0 > bar(1)) {}
}