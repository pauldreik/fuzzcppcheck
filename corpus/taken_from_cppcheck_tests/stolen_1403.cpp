class Fred
{
public:
    Fred() { }
    Fred(Fred const & other) {}
    Fred(Fred && other) {}
    int i;
};