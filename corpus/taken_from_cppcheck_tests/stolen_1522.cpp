class Foo {
    int a;
public:
    Foo() : a(0) {}
    Foo& operator=(const Foo&);
    void Swap(Foo& rhs);
};

void Foo::Swap(Foo& rhs) {
    std::swap(a,rhs.a);
}

Foo& Foo::operator=(const Foo& rhs) {
    Foo copy(rhs);
    copy.Swap(*this);
    return *this;
}