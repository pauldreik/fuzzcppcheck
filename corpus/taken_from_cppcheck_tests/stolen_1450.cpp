class Fred
{
    const int * i;
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