class Foo : public FooBase {
    void Clone(FooBase& g);
    short m_bar;
};
void Foo::Clone(FooBase& g) {
    g->m_bar = m_bar;
}