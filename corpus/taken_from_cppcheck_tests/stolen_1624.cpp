class Fred
{
public:
    Fred() { init(this); }

    init(Fred *f)
    { f.d = 0; }

    double d;
};