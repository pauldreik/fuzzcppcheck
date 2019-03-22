class A
{
public:
    A & assign(const A & a)
    {
        return *this;
    }
    A & operator=(const A &a)
    {
        return assign(a);
    }
};