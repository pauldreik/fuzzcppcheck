class Fred {
public:
    Fred() {}
private:
    int x = 0;
    int y = f();
    int z{0};
    int (*pf[2])(){nullptr, nullptr};
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b{1}, c{2};
    int d, e{3};
    int f{4}, g;
};