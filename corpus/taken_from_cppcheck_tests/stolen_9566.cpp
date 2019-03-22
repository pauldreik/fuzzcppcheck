class Fred
{
public:
    void foo();
};

void Fred::foo()
{
    char *str = new char[100];
    delete [] str;
    hello();
}