void f(int x) {
    const bool b = true;
    x++;
    if (x == 5)
        foo(b);
}