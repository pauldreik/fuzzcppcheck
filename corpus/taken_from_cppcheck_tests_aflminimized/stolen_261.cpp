std::vector<int*> f() {
    std::vector<int*> r;
    int i = 0;
    std::vector<int*> v;
    v.push_back(&i);
    r.assign(v.begin(), v.end());
    return r;
}
