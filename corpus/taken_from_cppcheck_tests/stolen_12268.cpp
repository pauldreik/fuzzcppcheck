Foo f(const std::vector<Bar>& bars) {
    std::vector<Bar>::iterator i = bars.begin();
    bars.insert(Bar());
    return i->foo;
}