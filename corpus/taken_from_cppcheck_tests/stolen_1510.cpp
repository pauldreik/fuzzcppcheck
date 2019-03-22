template<int n_>
struct Wrapper {
    static void foo(int * x) {
        for (int i(0); i <= n_; ++i)
            x[i] = 5;
    }
};
class A {
public:
    static constexpr int dim = 5;
    int x[dim + 1];
    A() {
        Wrapper<dim>::foo(x);
    }
};