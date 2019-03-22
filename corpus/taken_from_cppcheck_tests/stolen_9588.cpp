class A
{
    int *p;
public:
    A();
    ~A() { delete [] p; }
};
A::A()
{ p = new int[10]; }