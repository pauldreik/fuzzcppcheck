std::vector<int> g();
struct A {
    std::vector<int> m;
    void f() {
        std::vector<int> v = g();
        m.insert(m.end(), v.begin(), v.end());
    }
};
