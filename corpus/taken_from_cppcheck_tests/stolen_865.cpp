class A
{
public:
    class B
    {
    public:
        B & operator=(const B &b) { return b; }
    };
};