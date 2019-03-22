int * f(std::vector<int>& v) {
    for(int & x : v)
        return &x;
    return nullptr;
}
