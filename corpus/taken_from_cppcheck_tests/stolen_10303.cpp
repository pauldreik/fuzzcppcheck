class V
{
public:
    V()
    {
        x = y = z = 0.0;
    }
    V( double x, const double y, const double &z )
    {
        x = x; y = y; z = z;
    }
    double x, y, z;
};