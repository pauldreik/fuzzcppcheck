struct AB
{
    int a;
    int b;
    void reset()
    {
        a = 1;
        b = 2;
    }
};

void foo()
{
    struct AB ab;
    ab.reset();
}