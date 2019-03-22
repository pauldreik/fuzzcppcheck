class A
{
public:
    A & operator=(const A &a);
private:
    char * data;
};
A & A::operator=(const A &a)
{
    delete data;
    data = new char;
    *data = *a.data;
    return *this;
};