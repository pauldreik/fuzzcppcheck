class A {
private:
    char *pd;
public:
    void foo()
    {
        pd = new char[12];
        delete [] pd;
    }
};