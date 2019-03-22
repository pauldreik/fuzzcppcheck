class A
 {
    virtual int pure()=0;
    int nonpure()
    {return pure();}
    A(); 
    int m;
};
A::A():m(nonpure())
{}
