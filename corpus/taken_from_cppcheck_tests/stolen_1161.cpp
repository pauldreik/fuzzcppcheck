class A
{
public:
    bool bOn;
    bool foo()
    {
        return 0 != (bOn = bOn);
    }
};