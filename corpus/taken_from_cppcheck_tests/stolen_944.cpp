class A
{
public:
    A & operator=(const A &a)
    {
        delete data;
        data = new char;
        *data  = *a.data;
        return *this;
    }
private:
    char * data;
};