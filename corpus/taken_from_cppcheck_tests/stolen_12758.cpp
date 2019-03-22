struct A {
public:
    enum X { a, b };
    void Foo(const std::vector<enum X> &includes);
};
void A::Foo(const std::vector<enum A::X> &includes) {
    for (std::vector<enum A::X>::const_iterator it = includes.begin(); it != includes.end(); ++it) {
        const enum A::X currentIncList = *it;
    }
}