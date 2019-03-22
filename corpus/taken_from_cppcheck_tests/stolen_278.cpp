auto f() {
    std::vector<int> a;
    auto it = a.begin();
    return [=](){ return it; };
}
