template <typename T>
class Base {
public:
    using ArrayType = std::vector<Base<T>>;
};
using A = Base<int>;
static A::ArrayType array;
