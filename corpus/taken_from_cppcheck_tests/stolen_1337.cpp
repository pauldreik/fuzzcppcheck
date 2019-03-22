class A
{
    virtual void pure()=0;
    A();
};
A::A()
{pure();}
