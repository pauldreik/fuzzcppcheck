class Fred
{
private:
    int i;

    void foo1();
    void foo2()
    {
        ++i;
    }
}

Fred::foo1()
{
    i = 0;
}
