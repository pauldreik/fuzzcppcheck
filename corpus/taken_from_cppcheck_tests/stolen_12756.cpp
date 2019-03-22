class A {
public:
    class X { public: int a; };
    void Foo(const std::vector<class X> &includes);
};
void A::Foo(const std::vector<class A::X> &includes) {
    for (std::vector<class A::X>::const_iterator it = includes.begin(); it != includes.end(); ++it) {
        const class A::X currentIncList = *it;
    }
}