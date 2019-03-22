class Fred
{
public:
    int *i;
    Fred()
    {
        this->i = new int;
    }
    ~Fred()
    {
        delete this->i;
    }
};