auto g(int& a) {
    auto p = a;
    return [=](){ return p; };
}
