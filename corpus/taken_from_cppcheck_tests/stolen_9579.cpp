class A
{
private:
    int *p;
public:
    A()
    { p = new int[10]; }
    ~A()
    { }
    void cleanup()
    { delete [] p; }
};