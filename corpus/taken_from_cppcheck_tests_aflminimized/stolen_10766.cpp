struct A
{
    std::vector<int> x;
};

struct B
{
    B(A a, A a2) : a{std::move(a)}, a2{a2} {}
    void Init(A _a) { a = std::move(_a); }
    A a;    A a2;};