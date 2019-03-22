class John
{
private:
    int a[100];
    int b[100];

public:
    John()
    {
        if (snprintf(a,10,"a")) { }
        if (snprintf(b,10,"b")) { }
    }
};