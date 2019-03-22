struct A {
public:
    union X { int a; float b; };
    void Foo(const std::vector<union X> &includes);
};
void A::Foo(const std::vector<union A::X> &includes) {
    for (std::vector<union A::X>::const_iterator it = includes.begin(); it != includes.end(); ++it) {
        const union A::X currentIncList = *it;
    }
}