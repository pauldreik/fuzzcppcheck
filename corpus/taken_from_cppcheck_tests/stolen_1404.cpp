struct Fred
{
    Fred() { }
    Fred(Fred const & other) {}
    Fred(Fred && other) {}
    int i;
};