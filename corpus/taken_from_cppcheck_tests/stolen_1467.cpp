class Fred
{
    union
    {
        int a;
        char b[4];
    } U;
public:
    Fred()
    {
        U.a = 0;
    }
};