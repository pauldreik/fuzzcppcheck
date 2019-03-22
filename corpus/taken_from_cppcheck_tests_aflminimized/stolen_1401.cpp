class Fred
{
public:
    Fred() : i(0) { }
    Fred(Fred const & other) : i(other.i) {}
    Fred(Fred && other) : i(other.i) {}
    int i;
};