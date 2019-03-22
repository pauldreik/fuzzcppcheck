class A
{
private:
    int *p;
public:
    A()
    { }
    ~A()
    { }
    void foo()
    { p = new int[10]; delete [] p; }
};