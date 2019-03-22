class A {
public:
    using V = std::vector<double>;
};
using V = std::vector<int>;
class I {
private:
    A::V v_;
    V v2_;
};