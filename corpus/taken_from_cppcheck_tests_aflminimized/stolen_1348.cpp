class A
{
    virtual void pure()=0;
    A();
};
class B
{
    virtual void pure()=0;
};
A::A()
{B b; b.pure();}
