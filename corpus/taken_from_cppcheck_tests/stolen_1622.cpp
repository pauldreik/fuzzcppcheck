class Fred
{
public:
    Fred() { if (!init()); }

    bool init()
    { d = 0; return true; }

    double d;
};