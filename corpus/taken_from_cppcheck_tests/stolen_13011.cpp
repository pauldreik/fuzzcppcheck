struct S { int i; };
int foo() {
    std::vector<S> vec(10);
    for (auto a : vec)
        a.i = 0;
    for (auto & b : vec)
        b.i = 0;
    for (const auto & c : vec)
        auto ci = c.i;
    for (auto * d : vec)
        d.i = 0;
    for (const auto * e : vec)
        auto ei = e->i;
    return vec[0].i;
}