template<class T>
class Fred
{
    template<class T>
    static shared_ptr< Fred<T> > CreateFred()
    {
    }
};

shared_ptr<int> i;
