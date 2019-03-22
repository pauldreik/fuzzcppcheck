void* f(const std::vector<Bar>& bars) {
    std::vector<Bar>::iterator i = bars.begin();
    bars.insert(Bar());
    void* v = &i->foo;
    return v;
}