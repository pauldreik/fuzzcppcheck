template<class T>
    class SharedPtr {
    SharedPtr& operator=(SharedPtr<Y> const & r);
};
class TClass {
public:
    TClass& operator=(const TClass& rhs);
};
TClass::TClass(const TClass &other) {
    operator=(other);
}