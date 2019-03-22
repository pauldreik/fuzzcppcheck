class Fred
{
public:
    Fred() { if (!init(*this)); }

    static bool init(Fred &f)
    { return true; }

    double d;
};