class Fred
{
public:
    void foo()
    {
        char *str = new char[100];
        delete [] str;
        hello();
    }
};