namespace Output
{
    class Foo
    {
    public:
        Foo();
    private:
        bool mMember;
    };
}
namespace Input
{
    Output::Foo::Foo()
    {
    }
}