namespace n1
{
class Foo {
public:
    Foo();
private:
    int i;
};
}

n1::Foo::Foo()
{ }

namespace n2
{
class Foo {
public:
    Foo() { }
};
}