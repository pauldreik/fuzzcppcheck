void foo(std::vector<int>& v) {
    int n = 0;
    std::generate(v.begin(), v.end(), [&n] {
        int r = n;
        n += 2;
        return r;
    });
}