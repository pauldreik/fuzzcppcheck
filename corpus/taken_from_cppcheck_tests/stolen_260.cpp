std::vector<int*> f() {
    int i = 0;
    std::vector<int*> v;
    v.push_back(&i);
    return v;
}
