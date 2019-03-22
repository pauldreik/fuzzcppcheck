struct A {
public:
    struct X { int a; };
    void Foo(const std::vector<struct X> &includes);
};
void A::Foo(const std::vector<struct A::X> &includes) {
    for (std::vector<struct A::X>::const_iterator it = includes.begin(); it != includes.end(); ++it) {
        const struct A::X currentIncList = *it;
    }
}