void f(const std::vector<Bar>& bars) {
    for(std::vector<Bar>::iterator i = bars.begin(); i != bars.end(); ++i) {
        bars.insert(i, bar);
        i = bars.insert(i, bar);
    }
}