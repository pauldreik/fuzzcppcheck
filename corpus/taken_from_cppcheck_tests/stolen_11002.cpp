class Test {
    int test;
    template <class T> T lookup() { return test; }
    int Fun() { return lookup<int>(); }
};