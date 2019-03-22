std::vector<int>::iterator f(std::vector<int> v) {
    for(auto it = v.begin();it != v.end();it++) {
        return it;
    }
    return {};
}
