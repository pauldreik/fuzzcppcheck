class Foo
{
public:
    int * pointer;
    Foo() { memset(this, 0, sizeof(*this)); }
};