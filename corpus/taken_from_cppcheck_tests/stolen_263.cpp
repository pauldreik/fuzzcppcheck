struct A {
    std::vector<int*> v;
    void f() {
        int i;
        int * p = &i;
        v.push_back(p);
    }
};
