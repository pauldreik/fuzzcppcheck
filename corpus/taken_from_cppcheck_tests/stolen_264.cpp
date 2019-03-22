struct A {
    std::vector<int*> m;
    void f() {
        int x;
        std::vector<int*> v;
        v.push_back(&x);
        m.insert(m.end(), v.begin(), v.end());
    }
};
