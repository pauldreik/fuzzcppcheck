class A
{
    virtual void pure()=0;
    A(bool b);
};
A::A(bool b)
{if (b) pure();}
