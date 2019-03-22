void f(std::vector<int>::iterator it) {
    std::for_each(it, it, [](int){});
}
