int foo() { return 0; }
struct A {
    A() : m_i(foo())
    {}
int m_i;
};