auto f() {
    std::vector<int> x;
    auto it = x.begin();
    return std::next(it + 1);
}