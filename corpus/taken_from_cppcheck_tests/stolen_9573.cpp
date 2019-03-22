class A
{
public:
    int * p;
    A()
    { p = new int; }
    ~A()
    { delete (p); }
};