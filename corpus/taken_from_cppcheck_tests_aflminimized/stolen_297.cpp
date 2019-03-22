template<class T>
auto by_value(T x) {
    return [=] { return x; };
}
auto g() {
    std::vector<int> v;
    return by_value(v.begin());
}
