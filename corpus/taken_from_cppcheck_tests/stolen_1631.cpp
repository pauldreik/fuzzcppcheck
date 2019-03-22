namespace n1
{
class Foo {public:
    Foo();
private:
    int i;
};
}

n1::Foo::Foo() : i(0)
{ }

namespace n2
{
class Foo {public:
    Foo() { }
};
}