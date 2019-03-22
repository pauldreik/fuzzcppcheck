class Fred
{
private:
    char *str1;
    char *str2;
public:
    Fred();
    ~Fred();
};

Fred::Fred()
{
    str1 = new char[10];
    str2 = new char[10];
}

Fred::~Fred()
{
    delete [] str2;
}