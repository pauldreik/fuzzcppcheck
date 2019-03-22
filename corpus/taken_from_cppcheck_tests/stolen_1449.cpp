class Fred
{
    int * i;
public:
    Fred() : i(NULL) { }
    Fred & operator=(const Fred &fred)
    {
        if (&fred != this)
        {
        }
        return *this
    }
};