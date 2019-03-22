class A
 {
    virtual void pure()=0;
    void nonpure()
    {pure();}
    A(); 
};
A::A()
{nonpure();}
