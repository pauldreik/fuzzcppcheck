void* f(const std::vector<Bar>& bars) {
    std::vector<Bar>::iterator i = bars.begin();
    bars.insert(i, Bar());
    i = bars.insert(i, Bar());
    void* v = &i->foo;
    return v;
}