namespace ns1 {
    class Fred
    {
    private:
        char *str1;
        char *str2;
    public:
        Fred();
        ~Fred();
    };
}
ns1::Fred::Fred()
{
    str1 = new char[10];
    str2 = new char[10];
}

ns1::Fred::~Fred()
{
    delete [] str2;
}