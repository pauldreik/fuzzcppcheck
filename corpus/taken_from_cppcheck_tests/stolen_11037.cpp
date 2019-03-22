class A {
public:
    using ArrayType = std::vector<int>;
    void func(typename ArrayType::size_type i) {
    }
};