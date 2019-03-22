class Foo
{
public:
    Foo& operator=(Foo* pOther);
    Foo& operator=(Foo& other);
};
Foo& Foo::operator=(Foo* pOther)
{
    return *this;
}
Foo& Foo::operator=(Foo& other)
{
    return Foo::operator=(&other);
}