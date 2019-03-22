class A
{
private:
    int i;

public:
    A()
    {
        init();
    }

    void init() { init(0); }

    void init(int value)
    { i = value; }
};