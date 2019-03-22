class Fred
{
public:
    Fred() { init(*this); }

    static void init(Fred &f)
    { f.d = 0; }

    double d;
};