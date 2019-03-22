class A
{
    int *p;
public:
    A()
    { p = new int[10]; }
    ~A() { delete [] p; }
};