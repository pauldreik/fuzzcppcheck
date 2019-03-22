class foo
{
public:
    void do_something(const int x, const int y);
    void bar();
};

void foo::bar()
{
    POINT pOutput = { 0 , 0 };
    int x = pOutput.x;
    int y = pOutput.y;
}
