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

B::B()
{
}

A::B::B()
{
}