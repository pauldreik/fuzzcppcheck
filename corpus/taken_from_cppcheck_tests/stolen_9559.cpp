class Fred
{
private:
    char *str1;
    char *str2;
public:
    Fred()
    {
        str1 = new char[10];
        str2 = new char[10];
    }
    ~Fred()
    {
        delete [] str2;
    }
};