class A
{
private:
    const char * l1[10];
public:
    A()
    {
        for (int i = 0 ; i < 10; l1[i] = NULL, i++);
    }
    void f1() { l1[0] = "Hello"; }
};