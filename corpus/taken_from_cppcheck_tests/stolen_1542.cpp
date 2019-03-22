struct Foo
{
    int a;
};
class Bar
{
    Foo foo[10];
public:
    Bar()
    {
        foo[0].a = 0;
    }
};