struct Fred
{
    Fred();
    explicit Fred(int _i);
    Fred(Fred const & other);
    int i;
};
Fred::Fred()
{ }
Fred::Fred(int _i)
{
    i = _i;
}
