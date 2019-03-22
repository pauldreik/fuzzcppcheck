class Foo
{
public:
    Foo() { }
    Foo &operator=(const Foo &)
    { return *this; }
    static int i;
};