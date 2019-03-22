class B
{
public:
    B();
    int j;
};

class A
{
    class B
    {
    public:
        B();
        int i;
    };
};

A::B::B()
{
    i = 0;
}