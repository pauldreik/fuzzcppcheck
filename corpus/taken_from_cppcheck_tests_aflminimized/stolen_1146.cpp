class Foo
{
    int * p;
public:
    Foo () : p(0) { }
    int * f();
    const int * f() const;
};
const int * Foo::f() const
{
    return p;
}
int * Foo::f()
{
    return p;
}