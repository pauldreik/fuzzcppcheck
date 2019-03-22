auto g() {
    std::vector<char> v;
    return {v, [v]() { return v.data(); }};
}
