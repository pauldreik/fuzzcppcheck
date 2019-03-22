struct P
{
    void func();
    bool operator==(const P&) const;
};
struct X
{
    P first;
    P second;
};
bool bar();
void baz(const P&);
void foo(const X& x)
{
    P current = x.first;
    P previous = x.first;
    while (true)
    {
        baz(current);
        if (bar() && previous == current)
        {
            current.func();
        }
        previous = current;
    }
}
