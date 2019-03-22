class Fred
{
    int i;
public:
    Fred() : i(5) { }
    Fred & operator=(const Fred &fred)
    {
        if (&fred != this)
        {
        }
        return *this
    }
};