class A
{
public:
    A & operator=(const A &a)
    {
        delete [] data;
        data = new char[strlen(a.data) + 1];
        strcpy(data, a.data);
        return *this;
    }
private:
    char * data;
};