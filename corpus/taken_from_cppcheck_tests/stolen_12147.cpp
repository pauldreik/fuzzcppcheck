void f() {
    std::vector<int> a;
    std::vector<int> t;
    std::vector<int>::const_iterator it;
    it = a.begin();
    while (it!=a.end())
        ++it;
    it = t.begin();
    while (it!=a.end())
        ++it;
}