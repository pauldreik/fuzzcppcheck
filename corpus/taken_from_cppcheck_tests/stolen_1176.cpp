class A
{
    protected:
        unsigned short f (unsigned short X);
    public:
        A ();
};

unsigned short A::f (unsigned short X)
{
    enum ERetValues {RET_NOK = 0, RET_OK = 1};
    enum ETypes     {FLOAT_TYPE = 1, INT_TYPE = 2};

    try
    {
        switch (X)
        {
            case FLOAT_TYPE:
            {
                return RET_OK;
            }
            case INT_TYPE:
            {
                return RET_OK;
            }
            default:
            {
                return RET_NOK;
            }
        }
    }
    catch (...)
    {
        return RET_NOK;
    }

    return RET_NOK;
}