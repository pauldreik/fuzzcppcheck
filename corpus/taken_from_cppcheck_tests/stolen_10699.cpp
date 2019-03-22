int foo() {
    int x;
    bar(++x);
    x = 5;
    return bar(x);
}