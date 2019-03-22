class A
 {
    virtual void pure()=0;
    void nonpure(bool bCallPure)
    { if (bCallPure) pure();}
    A(); 
};
A::A()
{nonpure(false);}
