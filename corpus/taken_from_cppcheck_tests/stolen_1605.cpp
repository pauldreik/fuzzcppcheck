class Fred
{
private:
    union { int a; int b; };
public:
    Fred()
    { a = 0; }
};