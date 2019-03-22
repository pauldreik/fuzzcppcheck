std::vector<int*> f() {
    int i = 0;
    std::vector<int*> v = {&i, &i};
    return v;
}
