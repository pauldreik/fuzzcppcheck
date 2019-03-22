class A
 {
    virtual void pure()=0;
    void nonpure(bool bCallPure)
    {
        switch (bCallPure) {
        case true: pure(); break;
        }
    }
    A(); 
};
A::A()
{nonpure(false);}
