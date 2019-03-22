class A {
private:
    char *pd;
public:
    void foo();
};

void A::foo()
{
    A::pd = new char[12];
    delete [] A::pd;
}