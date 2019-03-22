struct A {
    std::vector<int*> v;
    void f() {
        int i;
        v.push_back(&i);
    }
};
