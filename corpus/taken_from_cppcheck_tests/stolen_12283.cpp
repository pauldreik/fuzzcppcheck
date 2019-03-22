bool f() {
    static set<Foo>::const_iterator current;
    return 25 > current->bar;
}