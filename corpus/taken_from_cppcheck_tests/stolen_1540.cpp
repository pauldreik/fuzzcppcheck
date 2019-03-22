struct Foo
{
    int a;
    void set(int x) { a = x; }
};
class Bar
{
    Foo foo;
public:
    Bar()
    {
        foo.set(0);
    }
};