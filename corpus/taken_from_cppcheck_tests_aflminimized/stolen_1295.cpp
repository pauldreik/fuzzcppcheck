class Fred {
    int array[256];
public:
    void f1() {
        for (auto & e : array)
            foo(e);
    }
    void f2() {
        for (const auto & e : array)
            foo(e);
    }
};