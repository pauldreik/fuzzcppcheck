struct A
{
    std::vector<int> x;
};

struct B
{
    explicit B(A a) : a(std::move(a)) {}
    void Init(A _a) { a = std::move(_a); }
    A a;};