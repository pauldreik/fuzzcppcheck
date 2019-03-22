class A
{
private:
    static int * p;
public:    A()
    {
        if (!p)
            p = new int[100];
    }
};