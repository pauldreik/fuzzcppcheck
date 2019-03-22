void f(int x) {
    const bool b = x;
    x++;
    if (x == 5)
        foo(b);
}