struct Fred {
    int i;

    Fred(const Fred &fred)
    { (*this) = fred; }

    const Fred & operator=(const Fred &fred)
    { i = fred.i; return *this; }
};