void f(std::vector<int> v) {
    std::for_each(v.begin(), v.begin(), [](int){});
}
