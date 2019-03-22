class Fred
{
private:
    char *str1;
public:
    Fred()
    {
        str1 = new char[10];
    }
    ~Fred()
    {
        free(str1);
    }
};