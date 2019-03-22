class Base {
public:
    virtual auto foo( ) const -> size_t { return 1; }
    virtual auto bar( ) const -> size_t { return 1; }
};
class Derived : public Base {
public :
    auto foo( ) const -> size_t { return 0; }
    auto bar( ) const -> size_t override { return 0; }
};