class A
{
    int *p;
public:
    A()
    { p = new int; }
    ~A() { delete p; }
};