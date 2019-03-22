class A {
private:
    char *pd;
public:
    void foo();
};

void A::foo()
{
    pd = new char[12];
    delete [] pd;
}