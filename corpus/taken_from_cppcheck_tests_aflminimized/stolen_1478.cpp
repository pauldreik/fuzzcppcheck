class A {
private:
    int _a;
public:
    A(const int a) noexcept : _a{a} {}
    A() noexcept;
};

A::A() noexcept: A(0) {}