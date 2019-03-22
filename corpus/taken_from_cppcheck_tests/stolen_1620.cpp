class Fred
{
public:
    Fred() { if (!init(*this)); }

    static bool init(Fred &f)
    { f.d = 0; return true; }

    double d;
};