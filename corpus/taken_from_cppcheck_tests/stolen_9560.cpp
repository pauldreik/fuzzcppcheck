class Fred
{
private:
    char *str1;
public:
    Fred();
    ~Fred();
};

Fred::Fred()
{
    str1 = new char[10];
}

Fred::~Fred()
{
    free(str1);
}