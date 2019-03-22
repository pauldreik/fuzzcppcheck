struct S { int i; };
int foo() {
    S array[10];
    for (auto a : array)
        a.i = 0;
    for (auto & b : array)
        b.i = 1;
    for (const auto & c : array)
        auto ci = c.i;
    for (auto * d : array)
        d->i = 0;
    for (const auto * e : array)
        auto ei = e->i;
    return array[0].i;
}